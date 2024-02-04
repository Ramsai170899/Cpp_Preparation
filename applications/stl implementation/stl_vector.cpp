//  dynamic array - vector.
// when array size is full and still if new elements are yet to be pushed.... new array is created with double size than the previous array, all the elements gets copied and the old array gets dumped.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "size of vector : " << v.size() << endl;
    cout << "Capacity of vector : " << v.capacity() << endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "size of vector : " << v.size() << endl;
    cout << "Capacity of vector : " << v.capacity() << endl;

    v.shrink_to_fit();
    cout << "after shrinking to fit capacity is : " << v.capacity() << endl;

    v.pop_back();
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Element at 2nd index is : " << v.at(2) << endl;
    cout << "First element in the vector is : " << v.front() << endl;
    cout << "Last element in the vector is : " << v.back() << endl;

    cout << "before clear size is :  " << v.size() << endl;
    v.clear();
    cout << "after clear size is :  " << v.size() << endl;

    cout << "Capacity of vector : " << v.capacity() << endl;

    vector<int> a(5);
    a.push_back(1);

    cout << a.size() << endl;
    cout << a.capacity() << endl;
}