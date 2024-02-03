#include <iostream>
using namespace std;

void reverse(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    reverse(n - 1);
}

void strsequence(int n)
{
    if (n == 0)
    {
        return;
    }
    strsequence(n - 1);
    cout << n << " ";
}

int main()
{
    reverse(10);
    strsequence(10);
}