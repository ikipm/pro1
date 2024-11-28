#include <iostream>
#include <vector>
using namespace std;

/*
* @Pre: Una matriu de enters quadrada i un índex de fila
* @Post: Retorna la suma dels elements de la fila
*/
int rowSum(const vector<vector<int>>& matrix, int row){
    int sum = 0;
    for (int i = 0; i < matrix[row].size(); i++){
        sum += matrix[row][i];
    }
    return sum;
}

/*
* @Pre: Una matriu de enters quadrada i un índex de columna
* @Post: Retorna la suma dels elements de la columna
*/
int columnSum(const vector<vector<int>>& matrix, int column){
    int sum = 0;
    for (int i = 0; i < matrix.size(); i++){
        sum += matrix[i][column];
    }
    return sum;
}

/*
* @Pre: Una matriu de enters quadrada
* @Post: Retorna true si la matriu és estocàstica, false altrament
*/
bool checkStochastic(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    
    for (int i = 0; i < n; ++i) {
        if (rowSum(matrix, i) != 10 || columnSum(matrix, i) != 10) {
            return false;
        }
    }
    return true;
}

/*
* @Pre: L'entrada consisteix en un enter n seguit d'una matriu nxn (quadrada) d'enters
* @Post: Escriu "true" si la matriu és estocàstica, "false" altrament
*/
int main(){
    int n;
    while(cin >> n){
        vector<vector<int>> matrix(n, vector<int>(n));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> matrix[i][j];
            }
        }
        if (checkStochastic(matrix)) cout << "true" << endl;
        else cout << "false" << endl;
    }
    return 0;
}