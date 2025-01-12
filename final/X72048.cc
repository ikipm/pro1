#include <iostream>
#include <string>
using namespace std;

/*  @Pre: Un enter n com a paràmetre. 
*   @Post: Retorna una cadena de forma n+f(n-1)+n tants cops com n.
*/
string f(int n){
    string result = "";
    string s = to_string(n);
    if(n == 0) return "0";
    for (int i = 0; i < n-1; i++) {
        result += s + f(n-1);
    }
    result += s + f(n-1) + s;
    return result;
}

/*  @Pre: Una sèrie d'enters n pel canal d'entrada.
*   @Post: Per a cada enter n, s'executa f que retorna una cadena que repeteix la seqüència in + in-1 + .. + in-1 + in.
*/
int main(){
    int n;
    while (cin >> n) {
        cout << f(n) << endl;
    }
    return 0;
}