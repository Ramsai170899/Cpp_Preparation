#include <iostream>
using namespace std;

// various not so frequently used assignment operators.

int main()
{
    int x = 5;
    x = x << 3;
    cout << x << endl;

    int y = 50;
    y = y >> 3;
    cout << y << endl;

    int z = 5;
    z = z | 3;
    cout << z << endl;

    return 0;
}