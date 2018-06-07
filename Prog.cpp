#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

/*void talaltatok(string szo, string tipp, string kitalalt){
	tipp.erase(szo.length());
	int szamol = 0;
	for(unsigned int i; i < szo.length(); i++){
		szamol++;
		if(szo.at(i) == tipp.at(i)){
			kitalalt.at(szamol) = szo.at(i);
		};
	};
	for(unsigned int i = 0; i < szo.length();i++){
		cout << kitalalt[i];
	};
};*/


int main(){
	string szavak[5] = {"csirke", "kakas", "kutya", "macska", "tehen"};
	cout << "Szokitalali jatek! Talald ki milyen allatra gondoltam!\n\n";
	
	cout << "Segitseg:\n";
	int szam;
	srand(time(NULL));
	szam = rand() % 4 + 1;
	string szo = szavak[szam];
	string kitalalt[szo.length()];
	for(unsigned int i = 0; i < szo.length();i++){
		kitalalt[i] = "*";
	};
	for(unsigned int i = 0; i < szo.length();i++){
		cout << szo.at(i);
	};
	cout << "\n";
	
	int kor=1;
	string tipp;
	do{
		cout << "\nIrd be a(z) " << kor << ". tipped!\n";
		cin >> tipp;
		if(tipp == szo){
			break;
		}else{
		cout << "\nA kovetkezo helyen van jo betu:\n";
			tipp.erase(szo.length());
		for(unsigned int i = 0; i < szo.length(); i++){
			if((szo[i]) == (tipp[i])){
				kitalalt[i] = szo[i];
			}else{
			}
		};
		for(unsigned int i = 0; i < szo.length();i++){
			cout << kitalalt[i];
		};
	
		kor++;
		};
	}while(kor != 5);
	if((kor != 5) && (tipp == szo)){
		cout << "\n\nGratulalunk! Nyertel!";
	}else{
		cout << "\n\nSajnos nem talaltad ki a szot.";
	};
	return 0;
}
