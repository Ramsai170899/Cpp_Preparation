#include<iostream>
using namespace std;

void lowernumbertriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i ; j--)
        {
            cout << i;
        }
        cout << "\n";
    }
}

int main()
{
    lowernumbertriangle(5);
}