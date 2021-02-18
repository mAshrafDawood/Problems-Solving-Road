#include <iostream>
using namespace std;

int goingUP(int start, int finish){
    int iterations = 0;
    while (start != finish){
        iterations++;
        if (start == 122) start = 97;
        else start++;
    }
    return iterations;
}

int goingDOWN(int start, int finish){
    int iterations = 0;
    while (start != finish){
        iterations++;
        if (start == 97) start = 122;
        else start--;
    }
    return iterations;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(); cout.tie();
    int currentChr = 'a', sum=0;
    string word;
    cin >> word;
    for (int i = 0; i < word.length(); i++){
        int up =goingUP(currentChr, word[i]), down= goingDOWN(currentChr, word[i]);
        if (up < down) {sum += up; currentChr+=up;}
        else {sum += down; currentChr-=down;}
        if (currentChr > 122){int diff = currentChr - 122; currentChr = 96 + diff;}
        else if (currentChr < 97){int diff = 97 - currentChr; currentChr = 123 - diff;}
    }
    cout << sum;
}
