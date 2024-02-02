#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    *ptr = 20; // as *ptr holds the address location of the variable "a", any new value assigned to that address, will reflect in the variable too.
    cout << a << endl;
}