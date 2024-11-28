#include <iostream>
#include <vector>
using namespace std;

int main(){
    int rows, columns, n1, n2;
    string operation;
    cin >> rows >> columns;
    int matrix[rows][columns];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cin >> matrix[i][j];
        }
    }
    while (cin >> operation){
        if (operation == "row"){
            cin >> n1;
            cout << "row " << n1 << ":";
            for(int i = 1; i <= columns; i++) cout << " " << matrix[n1-1][i-1];
            cout << endl;
        } else if (operation == "column"){
            cin >> n1;
            cout << "column " << n1 << ":";
            for(int i = 1; i <= rows; i++) cout << " " << matrix[i-1][n1-1];
            cout << endl;
        } else if (operation == "element"){
            cin >> n1 >> n2;
            cout << "element " << n1 << " " << n2 << ": ";
            cout << matrix[n1-1][n2-1] << endl;
        } else cout << "error!" << endl;
    }
    return 0;
}