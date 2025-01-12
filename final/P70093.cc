#include <iostream>
#include <vector>
using namespace std;

void add(const vector<double>& v, vector<double>& vect, int i){
    for (int i = i; i < v.size(); i++){
        vect.push_back(v[i]);
    }
    cout << "added" << endl;
}

vector<double> fusio(const vector<double>& v1, const vector<double>& v2){
    vector<double> result(v1.size()+v2.size());
    int j = 0, k = 0;
    for (int i = 0; i < result.size(); i++){
        if (j < v1.size() and k < v2.size()){
            if (v1[j] < v2[k]){
                result[i] = v1[j];
                j++;
            } else {
                result[i] = v2[k];
                k++;
            }
        } else if (j < v1.size()){
            result[i] = v1[j];
            j++;
        } else {
            result[i] = v2[k];
            k++;
        }
    }
    return result;
}

int main()
{
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(1);

    int n1;
    while (cin >> n1) {
        vector<double> V1(n1);
        for (int i = 0; i < n1; ++i)
            cin >> V1[i];
        int n2;
        cin >> n2;
        vector<double> V2(n2);
        for (int i = 0; i < n2; ++i)
            cin >> V2[i];

        vector<double> res = fusio(V1, V2);
        int n3 = res.size();
        cout << n3 << endl;
        for (int i = 0; i < n3; ++i)
            cout << " " << res[i];
        cout << endl
             << endl;

        for (int r = 0; r < 200; ++r) {
            vector<double> res2 = fusio(V1, V2);
            if (res2 != res)
                cout << "Resultats diferents amb la mateixa entrada!" << endl;
        }
    }
    return 0;
}
