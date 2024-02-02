#include <iostream>
using namespace std;

int main()
{
    int muldimarr[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}};

    cout << "(0,0)th element in the muldimarr is : " << muldimarr[0][0] << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << muldimarr[i][j] << " ";
        }
        cout << "\n";
    }
}