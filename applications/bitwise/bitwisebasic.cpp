
// & , | , >> , << operators. these operators work on binary format of the inputs.

#include <iostream>
using namespace std;

int main()
{
    int a = 5; // 000101
    int b = 3; // 000011

    cout << (a & b) << endl;  // 000001 => 1
    cout << (a | b) << endl;  // 000111 => 7
    cout << (a >> b) << endl; // prints 0
    cout << (a << b) << endl; // 101000 => 32+8 => 40
}