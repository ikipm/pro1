#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void readVector(vector<string>& result){
    for(int i = 0; i < result.size(); i++){
        cin >> result[i];
    }
}

string moda(vector<string>& vect){
    int max_num = 1, current = 1;
    sort(vect.begin(), vect.end());
    string max = vect[0], prev = vect[0];
    for (int i = 1; i < vect.size(); i++){
        if (vect[i] == prev){
            current++;
        } else if (current > max_num or (current == max_num and vect[i] > max)) {
            max_num = current;
            max = prev;
            current = 1;
            prev = vect[i];
        } else {
            current = 1;
            prev = vect[i];
        }
    }
    if (current > max_num or (current == max_num and prev > max)){
        max = prev;
    }
    return max;
}

int main(){
    int n;
    cin >> n;
    while (n != 0){
        vector<string> vect(n);
        readVector(vect);
        cout << moda(vect) << endl;
        cin >> n;
    }
    return 0;
}