#include <iostream>
#include <vector>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(); cout.tie();
    string set;
    getline(cin, set);
    vector<char> chars;
    for (int i = 1; i < set.length() - 1; i++){
        bool flag = true;
        if (set[i] == ' ' || set[i] == ',') continue;
        for (auto v : chars){
            if (set[i] == v){
                flag = false;
                break;
            }
        }
        if (flag) chars.push_back(set[i]);
    }
    cout << chars.size();
}
