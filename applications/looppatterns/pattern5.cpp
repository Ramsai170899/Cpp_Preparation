#include <iostream>
using namespace std;

void inversestartriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

int main()
{
    inversestartriangle(5);
}