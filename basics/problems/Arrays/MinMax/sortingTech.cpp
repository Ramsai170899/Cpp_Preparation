#include <iostream>
#include <algorithm>
using namespace std;

int getMinMax(int arr[], int n)
{
    int min;
    int max;
    sort(arr, arr + n);
    min = arr[0];
    max = arr[n - 1];
    return min, max;
}

int main()
{
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int min, max = getMinMax(arr, arr_size);

    cout << "Minimum element is " << min << endl;
    cout << "Maximum element is " << max << endl;

    return 0;
}
