#include <iostream>
#include <vector>
using namespace std;

void fuse(vector<int>& vect, int l, int mid, int r){
    vector<int> aux(r-l+1);
    int i = l;
    int j = mid+1;
    int k = 0;
    while (i <= mid and j <= r){
        if(vect[i] <= vect[j]) {aux[k] = vect[i]; i++;}
        else {aux[k] = vect[j]; j++;}
        k++;
    }
    while(i <= mid){aux[k]=vect[i]; i++; k++;}
    while(j <= r){aux[k]=vect[j]; j++; k++;}
    for (k = 0; k < aux.size(); k++) vect[l+k] = aux[k];
}

void mergeSort(vector<int>& vect, int l, int r){
    if(l < r){
        int mid = (l+r)/2;
        mergeSort(vect, l, mid);
        mergeSort(vect, mid+1, r);
        fuse(vect, l, mid, r);
    }
}

int main(){
    vector<int> vect={8, 2, 5, 3, 4, 7, 6, 1};
    mergeSort(vect, 0, vect.size()-1);
    for (int i = 0; i < vect.size(); i++){
        cout << vect[i] << " ";
    }
    cout << endl;
}