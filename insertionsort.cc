#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& vect){
    int x, j;
    for(int i = 1; i < vect.size(); i++){
        x = vect[i];
        j = i;
        while(j > 0 and vect[j-1]>x){
            vect[j] = vect[j-1];
            j--;
        }
        vect[j] = x;
    }
}

int main(){
    vector<int> vect={8, 2, 5, 3, 4, 7, 6, 1};
    insertionSort(vect);
    for (int i = 0; i < vect.size(); i++){
        cout << vect[i] << " ";
    }
    cout << endl;
}