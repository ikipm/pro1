#include <iostream>
#include <vector>
using namespace std;

struct Data{
    int dia, mes, any;
};

bool menor(const Data& d1, const Data& d2){
    return (d1.any <= d2.any and d1.mes <= d2.mes and d1.dia < d2.dia);
}

void read_dates(vector<Data>& dates){
    string date, num;
    bool dia = false, mes = false;
    for (int i = 0; i < dates.size(); i++){
        num = "";
        cin >> date;
        for(int j = 0; j < date.size(); j++){
            if (date[i] == '/'){
                if(not dia){dates[i].dia = stoi(num); dia = true;}
                else if (not mes){dates[i].mes = stoi(num); mes = true;}
                num = "";
            } else {num += date[j];}
        }
        dates[i].any = stoi(num);
    }
}

bool comp(){
    
}

int main(){
    int n;
    cin >> n;
    vector<Data> dates(n);
    read_dates(dates);
    return 0;
}
