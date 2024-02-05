#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 20, 5, 78, 30};
    int element, pos, i;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter position and element : \n";
    cin >> pos, element;
    if (pos <= size && pos >= 0)
    {
        // shift all the elements from the last index to pos by 1 position to the right
        for (i = size; i > pos; i--)
            arr[i] = arr[i - 1];
        // Insert element at the given position
        arr[pos] = element;
        for (i = 0; i <= size - 1; i++)
            cout << arr[i];
    }
    else
        cout << "Invalid Position\n";
    return 0;
}