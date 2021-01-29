#include <iostream>
using namespace std;

int main()
{
    int num = 0 , a , b , c , res = 0;
    cin >> num;
    for(int i = 0 ; i < num ; i++)
    {
        cin >> a >> b >> c;
        int sum = a + b + c;
        if(sum >= 2)
            res++;
    }
    cout << res;
    return 0;
}
