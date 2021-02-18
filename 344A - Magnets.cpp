#include <iostream>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(); cout.tie();
    int z, sum=0;
    cin >> z;
    string pole, last_pole = "";
    for (int i = 0; i < z; i++){
        cin >> pole;
        if (pole != last_pole){
            sum++;
            last_pole = pole;
        }
    }
    cout << sum;
    return 0;
}
