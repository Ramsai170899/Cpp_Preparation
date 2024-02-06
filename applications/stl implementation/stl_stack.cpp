#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);

    cout << "size : " << s.size() << endl;

    for (int i = 0; i < s.size(); i++)
    {
        cout << s.top() << " ";
        s.pop();
    }
}