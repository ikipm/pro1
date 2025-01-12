#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matrix;

void writeMatrix(Matrix& m){
    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[i].size(); j++){
            cin >> m[i][j];
        }
    }
}

bool isZigZag(const Matrix& m){
    vector<int> sequence(0);
    for(int i = 0; i < m[0].size(); i++){
        if(i%2 == 0){
            for (int row = 0; row < m.size(); row++){
                sequence.push_back(m[row][i]);
            }
        } else {
            for (int row = m.size()-1; row >= 0; row--){
                sequence.push_back(m[row][i]);
            }
        }
    }
    for(int i = 1; i < sequence.size(); i++){
        if (sequence[i-1] >= sequence[i]) return false;
    }
    return true;
}

int main(){
    int n, m, i = 1;
    while(cin >> n >> m){
        Matrix matrix(n, vector<int>(m));
        writeMatrix(matrix);
        cout << "matriu " << i << ": ";
        if(isZigZag(matrix)) cout << "si" << endl;
        else cout << "no" << endl;
        i++;
    }
    return 0;
}