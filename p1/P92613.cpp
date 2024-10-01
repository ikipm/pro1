#include <iostream>
using namespace std;

int main(){
    double num;
    int nf, nc, nr;
    cin >> num;
    nf = int(num);
    if (nf==num){
        nc = num;
        nr = num;
    } else {
        nc = nf+1;
        if (num-nf<0.5) nr=nf;
        else nr=nf+1;
    }
    cout << nf << " " << nc << " " << nr << endl;
    return 0;
}