#include<iostream>
using namespace std;

int FibonacciSeries(int n)
{
    if (n <= 0)
        return -1;
    else if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return FibonacciSeries(n - 1) + FibonacciSeries(n - 2);
}

int main()
{
    int result = FibonacciSeries(10);
    cout << result << endl;
}