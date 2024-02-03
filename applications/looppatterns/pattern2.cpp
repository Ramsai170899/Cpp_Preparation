#include <iostream>
using namespace std;

void lowertriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

int main()
{
    lowertriangle(5);
}