// Pre: L’entrada consisteix en un nombre natural n seguit de n casos. Cada cas consisteix en quatre nombres naturals x1, y1, x2, y2.
// Post: Per a cada cas, s’ha d’indicar en quina direcció es troba el punt (x2, y2) respecte del punt (x1, y1).

#include <iostream>
using namespace std;

int main(){
    int userInput; // Inicialitzem la variable que ens indicarà el nombre de casos
    cin >> userInput;
    for (int i = 0; i < userInput; i++){ // Bucle que recorrerà tots els casos
        int x1, y1, x2, y2; // Inicialitzem les variables que ens indicaran les coordenades
        cin >> x1 >> y1 >> x2 >> y2; // Llegim les coordenades

        // Comparem les coordenades per saber en quin quadrant es troba el punt i mostrem la direcció per pantalla
        if (x1 < x2 && y1 < y2) cout << "NE" << endl; 
        else if (x1 < x2 && y1 > y2) cout << "SE" << endl;
        else if (x1 > x2 && y1 < y2) cout << "NO" << endl;
        else if (x1 > x2 && y1 > y2) cout << "SO" << endl;
        else if (x1 == x2) {
            if (y1 < y2) cout << "N" << endl;
            else cout << "S" << endl;
        } else if (y1 == y2) {
            if (x1 < x2) cout << "E" << endl;
            else cout << "O" << endl;
        }
    }
    return 0;
}