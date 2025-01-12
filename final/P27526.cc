#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;

void readMatrix(Matriu& matrix){
    for (int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[i].size(); j++){
            cin >> matrix[i][j];
        }
    }
}

void showRow(const Matriu& matrix, int i){
    for(int j = 0; j < matrix[i].size(); j++){
        cout << matrix[i][j];
        if (j != matrix[i].size()-1) cout << " ";
    }
    cout << endl;
}

void showMatrix(const Matriu& matrix){
    for (int i = 0; i < matrix.size(); i++){
        showRow(matrix, i);
    }
}

void changePosition(int j, int k, Matriu& matrix){
    int temp;
    for (int i = 0; i < matrix.size(); i++){
        temp = matrix[i][j];
        matrix[i][j] = matrix[i][k];
        matrix[i][k] = temp;
        showRow(matrix, i);
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    Matriu matrix(n, vector<int>(m));
    readMatrix(matrix);
    cout << "-----" << endl;
    showMatrix(matrix);
    cout << "-----" << endl;
    while (cin >> n >> m){
        changePosition(n, m, matrix);
        //readMatrix(matrix);
        cout << "-----" << endl;
    }
    return 0;
}