#include <iostream>
using namespace std;

template <typename T>
T factorial(T a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }

    T fact = a * factorial(a - 1);

    return fact;
}

int main()
{
    int a = factorial(3);
    cout << a << endl;

    double b = factorial(3.82);
    cout << b << endl;
}