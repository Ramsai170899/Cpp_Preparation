#include <iostream>
#include <list>
#include <stack>
using namespace std;

int main()
{
    list<char> l = {'r', 'a', 'm', '@', 'm', 'a', 'o'};
    char spl = '@';

    stack<char> s;
    list<char>::iterator it;

    for (it = l.begin(); it != l.end(); ++it)
    {
        if (*it == spl)
            break;
        s.push(*it);
    } // if the code reached till here, it means "it" stopped at spl char.

    ++it; // do nothing when "it" is at spl char.

    while (it != l.end() && !s.empty())
    {
        if (*it != s.top())
        {
            cout << "Not a palindrome list." << endl;
            return 0;
        }
        ++it;
        s.pop();
    }

    if (s.empty() && it == l.end())
        cout << "Palindrome list !" << endl;
    else
        cout << "Not a palindrome list." << endl;

    return 0;
}