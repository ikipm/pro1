// Pre: Una sequència de nombres naturals
// Post: Escriure "SI" si hi ha almenys cinc nombres que comencen i acaben amb el mateix dígit (tenen forma ABCA)
//       i escriure "NO" en cas contrari

#include <iostream>
using namespace std;

int main() {
    int i = 0, n; // Inizialitzem les variables
    while (cin >> n) if (n/1000 == n%10) i++; // Llegim els nombres i incrementem la variable i si són de forma ABCA
    if (i >= 5) cout << "SI"; // Si hi ha almenys 5 nombres de forma ABCA escrivim SI
    else cout << "NO"; // En cas contrari escrivim NO
    return 0;
}