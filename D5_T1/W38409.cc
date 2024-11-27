#include <iostream>
using namespace std;

/*
* @Pre: Reb un conjunt de caràcters pel canal d'entrada.
* @Post: Retorna el màxim o mínim (indicat pel canal d'entrada) dels dos valors inserits. (max 10 5)
*/
int mmeval(){
    string s;
    int num1, num2;
    cin >> s;
    if (s == "max") {
        num1 = mmeval();
        num2 = mmeval();
        if (num1 > num2) return num1;
        else return num2;
    } else if (s == "min") {
        num1 = mmeval();
        num2 = mmeval();
        if (num1 < num2) return num1;
        else return num2;
    } else {
        return stoi(s);
    }
    return 0;
}

int main(){
    cout << mmeval() << endl;
    return 0;
}
