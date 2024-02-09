#include <iostream>
using namespace std;

template <typename T>
void swapvals(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10;
    int y = 25;

    swapvals(x, y);

    cout << x << " " << y << endl;

    return 0;
}