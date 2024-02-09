#include <iostream>
#include <vector>
using namespace std;

// Template function for bubble sort
template <typename T>
void bubbleSort(vector<T> &array)
{
    int n = array.size();
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < (n - i) - 1; ++j)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]); // Swap if the element found is greater than the next element
            }
        }
    }
}

// Template function to print elements of a container
template <typename T>
void printElements(vector<T> &array)
{
    for (auto element : array)
    {
        cout << element << " ";
    }
    cout << endl;
}

int main()
{
    // Sorting integers
    vector<int> intArray = {5, 2, 9, 1, 5, 6};
    cout << "Original array (int): ";
    printElements(intArray);

    bubbleSort(intArray);

    cout << "Sorted array (int): ";
    printElements(intArray);

    // Sorting doubles
    vector<double> doubleArray = {3.14, 1.1, 2.71, 0.5, 2.0};
    cout << "\nOriginal array (double): ";
    printElements(doubleArray);

    bubbleSort(doubleArray);

    cout << "Sorted array (double): ";
    printElements(doubleArray);

    return 0;
}
