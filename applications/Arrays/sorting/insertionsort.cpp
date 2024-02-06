// insertion sort - Insert an element from the unsorted part of the array in the correct position of the sorted part of the array.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 9, 4, 2, 1, 10, 3, 7, 8, 6};
    int n = 10;

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];              // begins with 1st index.
        int j = i - 1;                     // j being the 0th index.
        while (arr[j] > current && j >= 0) // while previous element is bigger than the current.
        {
            arr[j + 1] = arr[j]; // move all the elements from there to the next position, for the positions lessthan j.
            j--;                 // keep moving by decrementing j.
        }
        arr[j + 1] = current; // INSERT the current value in the right position.
    }

    cout << "Insertion sorted array : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}