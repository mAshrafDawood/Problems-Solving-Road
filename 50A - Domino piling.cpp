#include <iostream>
using namespace std;
int main()
{
    int n , m;
    cin >> n >> m;
    int area = n * m;
    if (area % 2 == 1)
        area--;
    cout << area / 2;
    return 0;
}
