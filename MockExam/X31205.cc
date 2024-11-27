#include <iostream>
using namespace std;

// Pre: Reb 3 nombres enters com a paràmetres
// Post: Retorna el nombre més gran dels 3 enters introduïts
int max(int n1, int n2, int n3){
    if(n1 > n2 && n1 > n3){
        return n1;
    }else if(n2 > n1 && n2 > n3){
        return n2;
    }
    return n3;
}

// Pre: Reb 3 nombres enters com a paràmetres
// Post: Retorna el nombre més petit dels 3 enters introduïts
int min(int n1, int n2, int n3){
    if(n1 < n2 && n1 < n3){
        return n1;
    }else if(n2 < n1 && n2 < n3){
        return n2;
    }
    return n3;
}

// Pre: Reb 3 nombres enters com a paràmetres
// Post: Retorna el nombre del mig dels 3 enters introduïts
int mid(int n1, int n2, int n3){
    if (n1 != max(n1, n2, n3) && n1 != min(n1, n2, n3)){
        return n1;
    }else if (n2 != max(n1, n2, n3) && n2 != min(n1, n2, n3)){
        return n2;
    }
    return n3;
}

// Pre: Reb 3 nombres enters pel canal d'entrada
// Post: Retorna el nombre mitjà dels 3 enters introduïts
int main(){
    int n1, n2, n3;
    while (cin >> n1 >> n2 >> n3){
        cout << mid(n1, n2, n3) << endl;
    }
    return 0;
}