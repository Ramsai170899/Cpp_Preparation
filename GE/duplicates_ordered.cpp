#include <iostream>
#include <set>
using namespace std;

int main()
{
    int arr[] = {6, 5, 8, 5, 7, 4, 5, 6, 2, 3};

    set<int> s;
    for (int i : arr)
        s.insert(i);

    for (int i : s)
        cout << i << " ";

    return 0;
}