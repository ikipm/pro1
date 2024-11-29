#include <iostream>
#include <vector>
using namespace std;

/*
* @Pre: Un vector que representa una matriu quadrada, el nombre de files/columnes i un índex de fila
* @Post: Retorna la suma dels elements de la fila
*/
int rowSum(const vector<int>& matrix, int n, int row){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += matrix[row * n + i];
    }
    return sum;
}

/*
* @Pre: Un vector que representa una matriu quadrada, el nombre de files/columnes i un índex de columna
* @Post: Retorna la suma dels elements de la columna
*/
int columnSum(const vector<int>& matrix, int n, int column){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += matrix[i * n + column];
    }
    return sum;
}

/*
* @Pre: Un vector que representa una matriu quadrada i el nombre de files/columnes
* @Post: Retorna true si la matriu és estocàstica, false altrament
*/
bool checkStochastic(const vector<int>& matrix, int n) {
    for (int i = 0; i < n; ++i) {
        if (rowSum(matrix, n, i) != 10 || columnSum(matrix, n, i) != 10) {
            return false;
        }
    }
    return true;
}

/*
* @Pre: L'entrada consisteix en un enter n seguit d'un vector que representa una matriu nxn
* @Post: Escriu "true" si la matriu és estocàstica, "false" altrament
*/
int main(){
    int n;
    while(cin >> n){
        vector<int> matrix(n * n);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> matrix[i * n + j];
            }
        }
        if (checkStochastic(matrix, n)) cout << "true" << endl;
        else cout << "false" << endl;
    }
    return 0;
}
