#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;                                   // memory address of a is stored in the integer pointer "ptr". ptr is a variable that is capable of holding an address of any particular data type.
    cout << ptr << " " << *ptr << " " << &a << endl; // the *ptr has the address and thus shows the value which is present in that address, (&a) is address itself.

    return 0;
}

/*
&a is address of a.
ptr = &a => address of a is getting stored in ptr.
int *ptr => shows the int value which ever is present in the address that it is holding.
*/