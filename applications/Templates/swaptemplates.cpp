#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5, y = 10;
    swapValues(x, y); // Swap integers
    cout << x << " " << y << endl;

    double a = 3.14, b = 2.71;
    swapValues(a, b); // Swap doubles
    cout << a << " " << b << endl;

    return 0;
}
