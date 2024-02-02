#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {9, 8, 7, 5, 4};
    string names[3] = {"ram", "som", "tom"};

    cout << arr[3] << endl; // accessingh array elements

    for (int i : arr)
    {
        cout << i << " "; // for each loop through the elements
    }

    cout << "\n";
    for (int i = 0; i < 3; i++)
    {
        cout << names[i] << " "; // for loop of strings.
    }

    cout << "\n";
    names[1] = "prem"; // modifying array elements.
    for (string i : names)
    {
        cout << i << " ";
    }

    cout << "\nsize of names array is : " << sizeof(names) << endl;
}