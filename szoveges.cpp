#include <iostream>
#include <string>
using namespace std;

void findAndReplaceAll(string & szoveg, string keresett, string replacelt)
{
	// Get the first occurrence
	size_t pos = szoveg.find(keresett);
 
	// Repeat till end is reached
	while( pos != string::npos)
	{
		// Replace this occurrence of Sub String
		szoveg.replace(pos, keresett.size(), replacelt);
		// Get the next occurrence from the current position
		pos =szoveg.find(keresett, pos + keresett.size());
	}
}

int main(){
	string $nev$;
	cout << "Milyen nevet szeretnel behelyettesiteni a $nev$ helyere?\n";
	getline(cin, $nev$);
	
	string $szin$;
	cout << "Milyen szinet szeretnel behelyettesiteni a $szin$ helyere?\n";
	getline(cin, $szin$);
	
	string szoveg;
	cout << "Ird le a szovegedet: ";
	getline(cin, szoveg);
	cout << "--------------------------------------------------------\n";
	
	findAndReplaceAll(szoveg, "$nev$", $nev$);
	findAndReplaceAll(szoveg, "$szin$", $szin$);
	for(unsigned int i = 0; i < szoveg.length(); i++){
			cout << szoveg.at(i);
		};

	/*string s1("ham is spam oh yes i am!");
	
	cout << s1.find("am") << endl; // jobbról barra
	cout << s1.rfind("am") << endl; // balról jobbra
	s1.erase(20) //levágja a végét 20 tól 
	s1.replace(14, 5, "valami") //replace...
	s1.insert(14, "beilleszt ") // beillesztés 				*/
	
	
	return 0;	
}
