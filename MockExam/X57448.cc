#include <iostream>
using namespace std;

// Pre: Una seqüència de caràcters introduïts pel canal d'entrada.
// Post: La màxima suma dels caràcters i l'index que ocupen.
void secuence(char c, char prev){
    int countA = 0, countC = 0, countG = 0, countT = 0, i = 1;
    int posA = 0, posC = 0, posG = 0, posT = 0, j = 1;
    while(c != '.'){
        cin >> c;
        if(prev == c) i++;
        else {
            if (prev == 'A' and i > countA){ countA = i; posA = j;}
            else if (prev == 'C' and i > countC){ countC = i; posC = j;}
            else if (prev == 'G' and i > countG){ countG = i; posG = j;}
            else if (prev == 'T' and i > countT){ countT = i; posT = j;}
            j += i;
            i = 1;
        }
        prev = c;
    }
    if (posA != 0) cout << "\"A\" = " << countA << "(" << posA << "), ";
    else cout << "\"A\" = " << countA << ", ";
    if (posC != 0) cout << "\"C\" = " << countC << "(" << posC << "), ";
    else cout << "\"C\" = " << countC << ", ";
    if (posG != 0) cout << "\"G\" = " << countG << "(" << posG << "), ";
    else cout << "\"G\" = " << countG << ", ";
    if (posT != 0) cout << "\"T\" = " << countT << "(" << posT << ")";
    else cout << "\"T\" = " << countT;
    cout << endl;
}

// Pre: Diverses seqüència de caràcters introduïts pel canal d'entrada.
// Post: La màxima suma dels caràcters i l'index que ocupen per a cada seqüència.
int main(){
    char c, prev;
    while (cin >> c){
        prev = c;
        secuence(c, prev);
    }
    return 0;
}