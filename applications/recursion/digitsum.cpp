#include <iostream>
using namespace std;

int digitsum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return digitsum(n / 10) + n % 10;
    }
}

int digitsumloop(int n)
{
    int res = 0;
    while (n > 0)
    {
        res = res + (n % 10);
        n = n / 10;
    }
    return res;
}

int main()
{
    int sum = digitsum(452);
    cout << sum << endl;

    int sumloop = digitsumloop(520);
    cout << sumloop << endl;

    return 0;
}