#include <iostream>
#include <queue>
using namespace std;

struct Fa {
    string szo;
    struct Fa* bal, *jobb;
};
 
struct Fa* ujFa(string szo)
{
    struct Fa* most = new Fa;
    most->szo = szo;
    most->bal = most->jobb = NULL;
    return most;
};
 
void kiiras(struct Fa* most)
{
    if (!most)
        return;
 
    kiiras(most->bal);
    cout << most->szo << " ";
    kiiras(most->jobb);
}
 
void beilleszt(struct Fa* most, string szo)
{
    queue<struct Fa*> q;
    q.push(most);
 
    while (!q.empty()) {
        struct Fa* most = q.front();
        q.pop();
        
        if (!most->bal) {
            most->bal = ujFa(szo);
            break;
        } else
            q.push(most->bal);
    }
}
 
int main()
{
    struct Fa* gyoker = ujFa("");
	cout << "Adja meg a szoveget: \n";
    string szo;
	getline(cin, szo);
	beilleszt(gyoker, szo);
	cout << "--------------------------------------------------\n";
    kiiras(gyoker);
    return 0;
}
