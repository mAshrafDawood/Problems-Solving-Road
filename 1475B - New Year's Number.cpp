#include <iostream>
using namespace std;

int main() {
int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2020 == 0) {
            cout << "YES" << endl;
            continue;
        }
        else if (n % 2021 == 0) {
            cout << "YES" << endl;
            continue;
        }
        else {
            int k = n % 2020;
            if (n - (k * 2021) < 0) {
                cout << "NO" << endl;
                continue;
            }
            else if((n - (k * 2021)) % 2020 != 0) {
                cout << "NO" << endl;
                continue;
            }
            else {
                cout << "YES" << endl;
                continue;
            }
        }
    }
	return 0;
}
