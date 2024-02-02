#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};
    for (int i : numbers)
    {
        cout << i * 10 << endl;
    }

    string fruits[5] = {"apple", "banana", "mango", "grapes", "berry"};
    for (string j : fruits)
    {
        cout << j << endl;
    }

    return 0;
}