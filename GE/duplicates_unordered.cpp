#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int arr[] = {5, 3, 5, 2, 8, 3, 4, 6, 2, 1};
    unordered_set<int> us;

    for (int i : arr)
        us.insert(i);

    for (auto i : us)
        cout << i << " ";

    return 0;
}