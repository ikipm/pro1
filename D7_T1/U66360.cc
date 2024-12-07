#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

/*
* @Pre: Una matriu, el nombre de files i columnes de la matriu.
* @Post: Llegeix els valors d'entrada i els introdueix en una matriu.
*/
void read_matrix(Matrix &m, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> m[i][j];
        }
    }
}

/*
* @Pre: Una matriu, un índex de fila, un índex de columna, una mida k que indica la mida de la matriu, la densitat actual i el valor màxim actual.
* @Post: Calcula la densitat de la submatriu de mida k a partir de la posició i, j.
*/
void get_partial_density(Matrix &m, int i, int j, int k, int &current_density, int &current_max_value){
    for (int l = 0; l < k; l++){
        for (int n = 0; n < k; n++){
            if (i + l < m.size() && j + n < m[i].size()){
                current_density += m[i + l][j + n];
                if (current_max_value < m[i + l][j + n]) current_max_value = m[i + l][j + n];
            }
        }
    }
}

/*
* @Pre: Una matriu i un enter k que indica la mida de la matriu.
* @Post: Escriu la posició de la submatriu de mida k amb màxima densitat, la densitat i el valor màxim.
*/
void get_high_density(Matrix &m, int k) {
    int max_density = 0, max_x = 0, max_y = 0, max_value = 0;
    for (int i = 0; i < m.size(); i++){
        for (int j = 0; j < m[i].size(); j++) {
            int current_density = 0, current_max_value = 0;
            get_partial_density(m, i, j, k, current_density, current_max_value);
            if (current_density > max_density){
                max_density = current_density;
                max_x = i;
                max_y = j;
                max_value = current_max_value;
            }
        }
    }
    cout << "(" << max_x << "," << max_y << ")" << endl;
    cout << max_density << endl;
    cout << max_value << endl;
}

/*
* @Pre: L'entrada consisteix en un enter que indica el nombre de files de la matriu, seguit de la matriu i un enter k que indica la mida de la submatriu.
* @Post: Escriu la posició de la submatriu de mida k amb màxima densitat, la densitat i el valor màxim.
*/
int main()
{
    int row, col, k;
    cin >> row;
    while (row != 0)
    {
        cin >> col;
        Matrix m(row, Row(col));
        read_matrix(m, row, col);
        cin >> k;
        get_high_density(m, k);
        cin >> row;
    }
    return 0;
}