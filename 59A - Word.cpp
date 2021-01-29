#include <iostream>
using namespace std;

int main(){
    string wrd, new_wrd="";
    cin >> wrd;
    int low = 0, upp = 0;
    for (int i = 0 ; i < wrd.length() ; i++){
        if (islower(wrd[i])) low++;
        else upp++;
    }
    if (low >= upp){
        for (int i = 0 ; i < wrd.length() ; i++){
            cout << char(tolower(wrd[i]));
        }
    }
    else {
        for (int i = 0 ; i < wrd.length() ; i++) {
            cout << char(toupper(wrd[i]));
        }
    }
    return 0;
}
