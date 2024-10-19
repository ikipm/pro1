// Pre: Conjunt de dos caràcters '0' i '1' que especifiquen un número en binari amb una separació de '01' i un final amb '0101'
// Post: Suma dels números binaris transformats a decimal que hi ha entre les separacions '01'
#include <iostream>
using namespace std;

int main() {
    char c1, c2; // c1 i c2 són els caràcters llegits
    int found = 0, result = 0, sum = 0; // found és el nombre de separacions '01' trobades, result és la suma total i sum és la suma parcial
    // Mentre no s'hagin trobat dues separacions '01' i es puguin llegir dos caràcters
    while (cin >> c1 >> c2) {
        // Si s'ha trobat una separació '01' s'afegeix la suma parcial al total i es reinicia la suma parcial
        if (c1 == '0' && c2 == '1') {
            result += sum;
            sum = 0;
            found++;
        } else if (c1 == c2) { // Si s'han llegit dos caràcters iguals s'afegeixen al total
            found = 0;
            sum = sum * 2 + (c1 - '0'); // Es multiplica per 2 la suma parcial i s'hi suma el valor del caràcter (de ASCII a digit) llegit
        }

        // Si s'han trobat dues separacions '01' s'imprimeix el resultat i es reinicialitzen les variables
        if (found == 2) {
            cout << result << endl;
            result = 0;
            sum = 0;
            found = 0;
        }
    }
    return 0;
}