#include <iostream>
#include <vector>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(); cout.tie();
    int y , w;
    cin >> y >> w;
    int num = 7 - max(y, w);
    if (num == 0) cout << "0/1";
    else if (num == 1) cout << "1/6";
    else if (num == 2) cout << "1/3";
    else if (num == 3) cout << "1/2";
    else if (num == 4) cout << "2/3";
    else if (num == 5) cout << "5/6";
    else if (num == 6) cout << "1/1";
}
