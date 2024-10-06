// Pre: L'entrada és un nombre natural n que indica quants nombres estranys volem trobar.
// Post: S'han mostrat per pantalla els n primers nombres estranys.
// Observation: It is forbidden to use any external function except cin and cout, and also the program must be well documented if not it will be invalidated.

#include <iostream>
using namespace std;

int main() {
    int found = 0, n;
    cin >> n; // Llegeix el número que indica quants nombres estranys volem trobar

    for (int i = 1; found < n; i++) { // Bucle que recorre des del número 1 fins que trobi n nombres estranys, on a és el nombre d'estranys trobats
        int temp = i, sum = 0, length = 0;

        // Calcula el nombre de dígits de i
        while (temp > 0) {
            temp /= 10;
            length++;
        }

        temp = i;
        // Calcula la suma de les potències de cada dígit elevat a la longitud, sumant cada potència a sum. (Exemple: 153 = 1^3 + 5^3 + 3^3)
        while (temp > 0) {
            int digit = temp % 10;
            int powPartial = 1;
            // Calcula la potència parcial del dígit
            for (int k = 0; k < length; k++) {
                powPartial *= digit;
            }
            sum += powPartial; // Suma la potència parcial a la variable amb el resultat
            temp /= 10;
        }

        // Si la suma de les potències dels dígits és igual a i, vol dir que i és un nombre estrany
        if (sum == i) {
            cout << i << " ";
            found++;
        }
    }

    return 0;
}