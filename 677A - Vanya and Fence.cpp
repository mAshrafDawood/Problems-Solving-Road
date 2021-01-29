#include <iostream>
using namespace std;

int main(){
    int _ , height , width = 0;
    cin >> _ >> height;
    for(int i = 0; i < _ ; i++){
        int x;
        cin >> x;
        if (x > height) width += 2;
        else width++;
    }
    cout << width;
    return 0;
}
