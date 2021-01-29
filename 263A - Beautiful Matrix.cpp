#include <iostream>
#include <cstdlib>
using namespace std;
int matrix[5][5];
int main()
{
    for (int i = 0 ; i < 5 ; i++)
    {
        for (int j = 0 ; j < 5 ; j++)
            cin >> matrix[i][j];
    }
    int moves = 0;
    for (int i = 0 ; i < 5 ; i++)
    {
        for (int j = 0 ; j < 5 ; j++)
        {
            if(matrix[i][j] == 1)
            {
                int row = j;
                int col = i;
                cout << abs(2 - row) + abs (2 - col);
            }
        }
    }
    return 0;
}
