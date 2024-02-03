// sum of natural numbers before "n"

#include <iostream>
using namespace std;

int naturalsum(int n)
{
    if (n < 0)
        return 0;
    int sum = n + naturalsum(n - 1);
    return sum;
}

int main()
{
    int sum = naturalsum(3);
    cout << sum << endl;

    return 0;
}