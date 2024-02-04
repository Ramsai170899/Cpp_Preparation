#include <iostream>
#include <array>

using namespace std;

int main()
{
    int arrbasic[] = {1, 2, 3, 4, 5};

    cout << "Basic array : ";
    for (int i : arrbasic)
    {
        cout << i << " ";
    }
    cout << "\n";

    //=======================================================================================

    array<int, 5> stlarray = {1, 2, 3, 4, 5};

    cout << "STL array : ";
    for (int i : stlarray)
    {
        cout << i << " ";
    }
    cout << "\n";

    //=======================================================================================

    int size = stlarray.size();
    cout << "stlarray size is : " << size << endl;

    //=======================================================================================

    cout << "Element at 2nd index is : " << stlarray.at(2) << endl;

    //=======================================================================================

    cout << "Is array empty : " << stlarray.empty() << endl;

    //=======================================================================================

    cout << "First element of the stlarray is : " << stlarray.front() << endl;

    //=======================================================================================

    cout << "Last element of the stlarray is : " << stlarray.back() << endl;

    //=======================================================================================
}