#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 2, 8, 6, 7, 3, 1, 21, 4, 10};
    int n = 10;

    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

    cout << "Bubble sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}