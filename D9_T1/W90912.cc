#include <iostream>
#include <vector>
using namespace std;

/* 
 * @Pre: Reb un vector d'strings v com a paràmetre i una seqüencia d'strings pel canal d'entrada.
 * @Post: Emmagatzema la seqüencia d'strings en el vector v en ordre creixent.
*/
void read_vector(vector<string>& v) {
    int i = 0;
    string x;
    while (i < v.size()) {
        cin >> x;
        v[i] = x;
        i++;
    }
}

/* Ús de la cerca dicotòmica.
 * @Pre: Reb un vector d'strings v i un string z com a paràmetres.
 * @Post: Retorna la posició de la primera aparició de z <= xi, si no hi és retorna -1.
*/
int first_position(const vector<string>& v, string z) {
    int low = 0, high = v.size() - 1;
    int pos = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        // Comproba que la mida de la paraula sigui igual i que sigui major.
        if (v[mid].size() > z.size() or (v[mid].size() == z.size() and v[mid] >= z)) {
            pos = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return pos;
}

/*
 * @Pre: Llegeix un enter n pel canal d'entrada.
 * @Post: Mostra per pantalla la posició de la primera aparició d'un nombre z tal que z <= xi en un vector d'n strings.
*/
int main() {
    int n;
    string z;
    cin >> n;
    vector<string> v(n);
    read_vector(v);
    while (cin >> z){
        cout << first_position(v, z) << endl;
    }
}