#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int x, y =0;
	cout << "Add meg a terulet magassagat!" << "\n";
	cin >> x;
	cout << "Add meg a terulet szelesseget!" << "\n";
	cin >> y;
	
char **jeghegy = new char * [x];
for(int i = 0;i < x;++i) {
	jeghegy[i] = new char [y];
	for(int j = 0;j < y;++j) {
		jeghegy[i][j] = i + j;
	}
}

for (int i=0;i<x;i++){
		for (int j=0; j <y;j++){
			jeghegy[i][j] = ' ';
		}
	}

int a, b =0;
int u = x-1;
int o = y-1;
for (int i=0;i<x;i++){
	cout << "Kerem a jeghegy " << i << ". sorat: " << endl;
	cin >> a;
	cin >> b;	
	if(a>b || a>=x || b>=y || a<0 || b<0){
		--i;
	}else{
		while (a<=b){
			jeghegy[i][a]='#';
			a++;
		}
	}
}


cout << "0. idoszelet:" << endl;	
	for (int i=0;i<x;i++){
		cout << "[";
		for (int j=0; j<y;j++){
			cout << jeghegy[i][j];
		}
		cout << "]";
		cout << endl;
	}
	
	int db=0;
	cout <<"1. idoszelet:" << endl;
	for (int i=0; i<x ; i++){
		cout << "[";
		for (int j=0; j<y ; j++){
			if(jeghegy[i][j]=='#'){
				if(jeghegy[i+1][j]=='#'){ 
					if (i!=u){
						db++;
					}
				};
				if((jeghegy[i][j+1]=='#') && (j!=o)){
					db++;
				};
				if((jeghegy[i-1][j]=='#') && (i!=0)){
					db++;
				};
				if((jeghegy[i][j-1]=='#') && (j!=0)){
					db++;
				};				
			}
			if (db<=1) {cout<< ' ';}
			else {cout << '#';};
			db=0;	
		}
		cout << "]";
		cout << endl;	
	}
	
	cout <<"2. idoszelet:" << endl;
	for (int i=0; i<x ; i++){
		cout << "[";
		for (int j=0; j<y ; j++){
			if(jeghegy[i][j]=='#'){
				if((jeghegy[i+1][j]=='#') && (i!=u)){
					db++;
				};
				if((jeghegy[i][j+1]=='#') && (j!=o)){
					db++;
				};
				if((jeghegy[i-1][j]=='#') && (i!=0)){
					db++;
				};
				if((jeghegy[i][j-1]=='#') && (j!=0)){
					db++;
				};				
			}
			if (db<=2) {cout<< ' ';}
			else {cout << '#';};
			db=0;	
		}
		cout << "]";
		cout << endl;	
	}
	
	cout <<"3. idoszelet:" << endl;
	for (int i=0; i<x ; i++){
		cout << "[";
		for (int j=0; j<y ; j++){
			if(jeghegy[i][j]=='#'){
				if((jeghegy[i+1][j]=='#') && (i!=u)){
					db++;
				};
				if((jeghegy[i][j+1]=='#') && (j!=o)){
					db++;
				};
				if((jeghegy[i-1][j]=='#') && (i!=0)){
					db++;
				};
				if((jeghegy[i][j-1]=='#') && (j!=0)){
					db++;
				};				
			}
			if (db<=3) {cout<< ' ';}
			else {cout << '#';};
			db=0;	
		}
		cout << "]";
		cout << endl;	
	}
	
	cout <<"4. idoszelet:" << endl;
	for (int i=0; i<x ; i++){
		cout << "[";
		for (int j=0; j<y ; j++){
			if(jeghegy[i][j]=='#'){
				if((jeghegy[i+1][j]=='#') && (i!=u)){
					db++;
				};
				if((jeghegy[i][j+1]=='#') && (j!=o)){
					db++;
				};
				if((jeghegy[i-1][j]=='#') && (i!=0)){
					db++;
				};
				if((jeghegy[i][j-1]=='#') && (j!=0)){
					db++;
				};				
			}
			if (db<=4) {cout<< ' ';}
			else {cout << '#';};
			db=0;	
		}
		cout << "]";
		cout << endl;	
	}

for(int i = 0;i < x;++i){ delete[] jeghegy[i]; }
delete[] jeghegy;
return 0;
}
