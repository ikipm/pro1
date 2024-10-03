#include <iostream>
using namespace std;

int main(){
    int a, b, tempa, result;
    while (cin >> a >> b) {
        tempa = a;
        result = 0;
        while (tempa <= b){
            result += tempa*tempa*tempa;
            tempa++;
        }
        cout << "suma dels cubs entre " << a << " i " << b << ": " << result << endl;
    }
    return 0;
}