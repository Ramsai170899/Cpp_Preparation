#include <iostream>
using namespace std;

int main()
{

    int *intArray = new int[4];
    intArray[0] = 5;
    intArray[1] = 6;
    intArray[2] = 7;
    intArray[3] = 8;

    cout << intArray << endl; // prints the base address location.

    cout << *intArray << endl; // prints the value at the base address location.

    cout << intArray + 1 << endl; // prints the 2nd location after the base address location.

    cout << *intArray + 1 << endl; // prints the 2nd value after the base address location.

    cout << "Array Elements: ";
    for (int j = 0; j < 4; j++)
    {
        cout << intArray[j];
        cout << " ";
    }

    delete[] intArray;

    return 0;
}