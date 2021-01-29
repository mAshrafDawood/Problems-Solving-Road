#include <iostream>
#include <list>
using namespace std;

int main(){
    int _;
    cin >> _;
    list <int> arr;
    for (int i = 0 ; i < _ ; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    arr.sort();
    while (!arr.empty()){
        cout << arr.front() << " ";
        arr.pop_front();
    }
    return 0;
}
