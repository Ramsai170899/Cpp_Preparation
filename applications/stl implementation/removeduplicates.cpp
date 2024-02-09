#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int arr[] = {5, 1, 8, 2, 6, 1, 4, 2};
    unordered_set<int> unique;

    for (int i : arr)
        unique.insert(i);

    for (int i : unique)
        cout << i << " ";

    return 0;
}