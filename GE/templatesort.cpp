#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void templatebubblesort(vector<T> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < (n - i) - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    vector<int> arr = {9, 6, 3, 2, 5, 8, 7, 4, 1, 10};

    templatebubblesort(arr);

    for (auto i : arr)
        cout << i << " ";

    return 0;
}