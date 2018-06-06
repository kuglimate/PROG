#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;


int main(){
	string $nev$;
	cout << "Milyen nevet szeretnel behelyettesiteni a $nev$ helyere?\n";
	getline(cin, $nev$);
	
	string $szin$;
	cout << "Milyen szinet szeretnel behelyettesiteni a $szin$ helyere?\n";
	getline(cin, $szin$);
	
	char fajlnev[50];
	ifstream fajl;
	cout << "Add meg a fajlt amibol olvasni szeretned a szoveget!\n";
	cin.getline(fajlnev, 50);
	fajl.open(fajlnev);
	
	if(!fajl.is_open()){
		exit(EXIT_FAILURE);
	};
	
	string szoveg;
	while(fajl.good()){
		fajl >> szoveg;
		if(szoveg == "[vege]"){
				cout << "";
				break;
		}else if(szoveg == "$nev$"){
			cout << $nev$ << " ";
		}else if(szoveg == "$szin$"){
				cout << $szin$ << " ";
			}else cout << szoveg << " ";
	}
	return 0;	
}
