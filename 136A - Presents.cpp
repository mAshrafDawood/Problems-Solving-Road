#include <iostream>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(); cout.tie();
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n ; i++) cin >> arr[i];
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n ; j++){
            if (arr[j] == i+1) cout << j+1 << " ";
        }
    }
    return 0;
}
