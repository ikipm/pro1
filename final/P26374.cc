#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu suma(const Matriu& a, const Matriu& b){
    int n = a.size();
    if (n > b.size()) n = b.size();
    Matriu result(n, vector<int>(n));
    for (int i = 0; i < a.size(); i++){
        for (int j = 0; j < a[i].size(); j++){
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    return result;
}

int main(){
    return 0;
}