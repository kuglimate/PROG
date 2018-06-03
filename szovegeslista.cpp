#include <iostream>
#include <list>
#include <cstring>
using namespace std;
struct node{
	string szo;
	node *kov;
	};	
bool ures(node *head);
char menu();
void elkezd(node *&head, node *&last, string szo);
void beilleszt(node *&head, node *&last, string szo);
void torol(node *&head, node *&last);
void mutat(node *current);

bool ures(node *head){
	if(head == NULL){
		return true;
	}else return false;
		
	};
	
char menu(){
	char choice;
	
	cout << "Menu\n";
	cout << "1. Add an item.\n";
	cout << "2. Remove an item.\n";
	cout << "3. Show the list.\n";
	cout << "4. Exit\n";
	
	cin >> choice;
	return choice;
	};
	
void elkezd(node *&head, node *&last, string szo){
	node *temp = new node;
	temp->szo = szo;
	temp->kov = NULL;
	head = temp;
	last = temp;
	};
	
void beilleszt(node *&head, node *&last, string szo){
	if(ures(head)){
		elkezd(head, last, szo);
		}else {
			node *temp = new node;
			temp->szo = szo;
			temp->kov = NULL;
			last->kov = temp;
			last = temp;
			}
	};
void torol(node *&head, node *&last){
	if(ures(head)){
		cout << "nem adtal meg szoveget\n";
		}else{
			if(head == last){
				delete head;
				head = NULL;
				last = NULL;
				}else {
					node *temp = head;
					head = head->kov;
					delete temp;
					};
			};
	};
	
void mutat(node *current){
	if(ures(current)){
		cout << "nem adtal meg szoveget\n";
		}else{
			cout << "a szovege: \n";
			while(current != NULL){
					for(unsigned int i = 0; i < current->szo.length(); i++){
						cout << current->szo.at(i);
					};
					cout << endl;
					current = current->kov;
			}
		}
	};


int main(){
	node *head = NULL;
	node *last = NULL;
	char choice;
	string szo;
	
	do{
	
		choice = menu();
		
		switch(choice){
			case '1': 	cout << "adj meg egy szot: ";
						cin >> szo;
						beilleszt(head, last, szo);
						break;
			case '2':	torol(head, last);
						break;
			case '3':	mutat(head);
						break;
			default:	cout << "EXIT";
			}
	}while(choice != '4');

return 0;	
}
