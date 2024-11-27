#include <iostream>
using namespace std;

// Pre: 2 nombres naturals, la longitud de la linia (n) i el valor que ha d'escriure (i) pasat per referència.
// Post: Mostra per pantalla una linia d'n nombres començada pel nombre i.
void line(int n, int& i){
    for (int j = 0; j < n; j++){
        cout << i;
        i--;
        if (i<0) i = 9;
    }
    cout << endl;
}

// Pre: 2 nombres naturals, el nombre de linies a fer (n2) i la longitud d'aquestes (n3).
// Post: Mostra per pantalla un rectangle de n2 x n3.
void rectangle(int n2, int n3){
    int i = 9;
    for(int j = 0; j < n2; j++){
        line(n3, i);
    }
}

// Pre: 3 nombres naturals pel canal d'entrada.
// Post: Mostra n1 rectangles de n2 x n3 separats per una linia.
int main(){
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    for (int j = 0; j < n1; j++){
        rectangle(n2, n3);
        if (j != n1-1) cout << endl;
    }
    return 0;
}