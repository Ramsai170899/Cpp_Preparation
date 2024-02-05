#include <iostream>
using namespace std;

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int flag = 0;

    // Iterate through the array and compare each element of the array to the item
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}