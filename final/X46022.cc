#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Player{
    string name;
    int level;
    int won;
    int pos;
};

typedef vector<Player> Players;

void writePlayers(Players& players){
    string name;
    int level;
    for(int i = 0; i < players.size(); i++){
        cin >> name >> level;
        players[i].name = name;
        players[i].level = level;
        players[i].won = 0;
        players[i].pos = i;
    }
}

void readPlayers(const Players& players){
    for(int i = 0; i < players.size(); i++){
        cout << players[i].name << " " << players[i].won;
        if (i != players.size()-1) cout << " ";
    }
    cout << endl;
}

/*void performPlay(Player& player1, Player& player2){
    if (player1.level > player2.level) player1.won += 2;
    else if (player2.level > player1.level) player2.won += 2;
    else {player1.won++; player2.won++;}
}*/

void performPlays(const Players& ol1, const Players& ol2, Players& p1, Players& p2){
    int i = 0, j = 0, n = ol1.size(), count1, count2, cp1, cp2;
    while (i < n and j < n){
        if (ol1[i].level > ol2[j].level){
            p1[ol1[i].pos].won = (n-j)*2;
            i++;
        } else if (ol1[i].level < ol2[j].level){
            p2[ol2[j].pos].won = (n-i)*2;
            j++;
        } else {
            count1 = 1;
            count2 = 1;
            while (ol1[i+count1].level == ol1[i+count1-1].level) {count1++;}
            while (ol2[j+count2].level == ol2[j+count2-1].level) {count2++;}
            cp1 = count1;
            cp2 = count2;
            while (cp1 > 0) {p1[ol1[i + cp1-1].pos].won = (n-j-count2)*2 + count2; cp1--;}
            while (cp2 > 0) {p2[ol2[j + cp2-1].pos].won = (n-i-count1)*2 + count1; cp2--;}
            i += count1;
            j += count2;
        }
    }
}

bool comp(Player p1, Player p2){
    if(p1.level != p2.level) return p1.level > p2.level;
    return p1.name < p2.name;
}

int main(){
    int n;
    while (cin >> n){
        Players players1(n);
        Players players2(n);
        Players olPlayers1(n);
        Players olPlayers2(n);
        writePlayers(players1);
        writePlayers(players2);
        olPlayers1 = players1;
        olPlayers2 = players2;
        sort(olPlayers1.begin(), olPlayers1.end(), comp);
        sort(olPlayers2.begin(), olPlayers2.end(), comp);
        performPlays(olPlayers1, olPlayers2, players1, players2);
        readPlayers(players1);
        readPlayers(players2);
        cout << endl;
    }
    return 0;
}