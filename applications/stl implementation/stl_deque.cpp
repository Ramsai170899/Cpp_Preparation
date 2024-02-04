// doubly ended queue
// push front, pop front , push back, pop back

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_front(9);

    d.pop_back();
    d.pop_front();

    d.emplace_back(8);

    for (int i : d)
    {
        cout << i << " ";
    }

    return 0;
}