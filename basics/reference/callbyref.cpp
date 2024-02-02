// A reference variable is a "reference" to an existing variable, and it is created with the &operator:

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &b = a; // reference variable "b" is initialized to reference the variable "a", and any changes made to either of them reflects with the other.

    cout << b << " " << &b;
    b = 15;
    cout << "\n";
    cout << a << " " << b;
}