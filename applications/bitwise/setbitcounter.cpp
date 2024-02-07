#include <iostream>
using namespace std;

int coutsetbits(int n)
{
    int count = 0;
    while (n)
    {
        cout << "inside while - ";
        n = n & (n - 1);
        count++;
        cout << n << " " << count << endl;
    }
    return count;
}

int main()
{
    cout << coutsetbits(25) << endl;

    return 0;
}