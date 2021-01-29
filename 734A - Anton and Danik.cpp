#include <iostream>
using namespace std;
int main(){
    int x, win = 0;
    string z;
    cin >> x >> z;
    for (int _ = 0; _ < x ; _++){
        if (z[_] == 'A') win++;
        else win--;
    }
    if (win > 0) cout << "Anton";
    else if (win == 0) cout << "Friendship";
    else cout << "Danik";
    return 0;
}
