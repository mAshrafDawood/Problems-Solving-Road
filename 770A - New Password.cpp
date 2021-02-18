#include <iostream>
using namespace std;

int nextChar(int chr, int upperLimit){
    if (chr >= upperLimit) return 97;
    return ++chr;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(); cout.tie();
    int n, k, start = 96;
    cin >> n >> k;
    while (n != 0){
        n--;
        start = nextChar(start, 96 + k);
        cout << (char) start;
    }
}
