#include <iostream>
using namespace std;

int linearsearch(int arr1[], int n, int keyl)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] == keyl)
                return i;
        }
        return -1;
    }
}

int binarysearch(int arr2[], int n, int keyb)
{
    int s, m = 0;
    int e = n;
    if (n = 0)
    {
        return 0;
    }
    else
    {
        while (s <= e)
        {
            m = (s + e) / 2;
            if (arr2[m] == keyb)
            {
                return m;
            }
            else if (arr2[m] > keyb)
            {
                e = m - 1;
            }
            else
            {
                s = m + 1;
            }
        }
        return -1;
    }
}

int main()
{
    int n1 = 5;
    int arr1[] = {5, 6, 7, 1, 2};
    int keyl = 2;
    cout << linearsearch(arr1, n1, keyl) << endl;

    int n2 = 5;
    int arr2[] = {11, 25, 36, 54, 82};
    int keyb = 25;
    cout << binarysearch(arr2, n2, keyb) << endl;

    return 0;
}