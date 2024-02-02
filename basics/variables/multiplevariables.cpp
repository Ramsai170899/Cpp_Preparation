#include <iostream>
using namespace std;

int main()
{
    // declaring multiple variables at once.
    int x = 10, y = 20, z = 30;
    cout << x + y + z << endl;

    // declaring multiple variables at once with same value.
    int a, b, c;
    a = b = c = 50;
    cout << a + b + c << endl;

    // identifiers.
    int m, minutes;
    m = minutes = 60;
    cout << "m is also ok.... but minutes is more understandable -  'C++ Identifiers' ";
    return 0;

    /*
    variable names are case sensitive.
    reserved words cannot be used as variable names
    */
}