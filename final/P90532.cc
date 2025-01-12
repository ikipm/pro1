#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Provincia{
    string nom;
    string capital;
    int habitants;
    int area;
    double pib;
};

struct Pais{
    string nom;
    string capital;
    vector<Provincia> provs;
};

typedef vector<Pais> Paisos;

double pib(const Paisos& p, char c, double d){
    double result = 0.0;
    for (int i = 0; i < p.size(); i++){
        if (p[i].nom[0] == c){
            for(int j = 0; j < p[i].provs.size(); j++){
                Provincia prov = p[i].provs[j];
                if ((double(prov.habitants) / prov.area) > d){
                    result += prov.pib;
                }
            }
        }
    }
    return result;
}

int main()
{
    return 0;
}