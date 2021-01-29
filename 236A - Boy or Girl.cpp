#include <iostream>
using namespace std;

int main(){
    string name;
    cin >> name;
    string chr = " ";
    for (int i = 0 ; i < name.length() ; i++){
        if (chr.find(name[i]) > chr.length()){
            chr += name[i];
        }
    }
    if ((chr.length() - 1) % 2 == 0) cout << "CHAT WITH HER!";
    if ((chr.length() - 1) % 2 == 1) cout << "IGNORE HIM!";
    return 0;
}
