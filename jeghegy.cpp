#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	char jeghegy[5][5]={
		{' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' '}
		};
	int a, b = 0;
	for (int i=0;i<5;i++){
		cout << "Kerem a jeghegy " << i << ". sorat: " << endl;
		cin >> a;
		cin >> b;
		if(a>b || a>=5 || b>=5 || a<0 || b<0){
			--i;
		}else{
			while (a<=b){	
				jeghegy[i][a]='#';
				a++;
			}
		}
	}
	
	cout << "0. idoszelet:" << endl;	
	for (int i=0;i<5;i++){
		for (int j=0; j <5;j++){
			cout << jeghegy[i][j];
		}
		cout << endl;
	}
	
	int db=0;
	cout <<"1. idoszelet:" << endl;
	for (int i=0; i<5 ; i++){
		for (int j=0; j<5 ; j++){
			if(jeghegy[i][j]=='#'){
				if((jeghegy[i+1][j]=='#') && (i!=4)){
					db++;
				};
				if((jeghegy[i][j+1]=='#') && (j!=4)){
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
		cout << endl;	
	}
	
	cout <<"2. idoszelet:" << endl;
	for (int i=0; i<5 ; i++){
		for (int j=0; j<5 ; j++){
			if(jeghegy[i][j]=='#'){
				if((jeghegy[i+1][j]=='#') && (i!=4)){
					db++;
				};
				if((jeghegy[i][j+1]=='#') && (j!=4)){
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
		cout << endl;	
	}
	
	cout <<"3. idoszelet:" << endl;
	for (int i=0; i<5 ; i++){
		for (int j=0; j<5 ; j++){
			if(jeghegy[i][j]=='#'){
				if((jeghegy[i+1][j]=='#') && (i!=4)){
					db++;
				};
				if((jeghegy[i][j+1]=='#') && (j!=4)){
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
		cout << endl;	
	}
	
	cout <<"4. idoszelet:" << endl;
	for (int i=0; i<5 ; i++){
		for (int j=0; j<5 ; j++){
			if(jeghegy[i][j]=='#'){
				if((jeghegy[i+1][j]=='#') && (i!=4)){
					db++;
				};
				if((jeghegy[i][j+1]=='#') && (j!=4)){
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
		cout << endl;	
	}
	
	return 0;
}

