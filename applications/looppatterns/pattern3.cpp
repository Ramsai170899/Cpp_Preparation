#include <iostream>
using namespace std;

void lowernumbertriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}

int main()
{
    lowernumbertriangle(5);
}