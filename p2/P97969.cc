#include <iostream>
using namespace std;

int main(){
    int count = 0;
    string userInput, sequence;
    while (userInput[userInput.length()-1] != '.'){
        cin >> userInput;
        sequence += userInput;
    }
    for (int i = 0; i < sequence.length(); i++) {
        if (sequence[i] == 'a') count++;
    }
    cout << count << endl;
    return 0;
}