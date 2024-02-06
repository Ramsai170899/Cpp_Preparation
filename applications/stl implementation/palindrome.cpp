#include <iostream>
#include <stack>
#include <list>
using namespace std;

int main()
{
    list<char> l;
    stack<char> S;
    string s = "madam@madam";
    char spl = '@';

    // 1st task: Creating a list with the given string
    for (int i = 0; i < s.length(); i++)
    {
        l.push_back(s[i]);
        cout << s[i] << " ";
    }
    cout << endl;

    // 2nd task: Pushing items to the stack until the spl character is encountered
    list<char>::iterator it;

    for (it = l.begin(); it != l.end(); ++it)
    {
        if (*it == spl)
            break;
        S.push(*it);
    }

    // Check if the remaining items in the list match the popped items from the stack
    ++it; // Move to the next character after spl

    while (it != l.end() && !S.empty())
    {
        if (*it != S.top())
        {
            cout << "Not a palindrome list." << endl;
            return 0;
        }
        ++it;
        S.pop();
    }

    // If the stack is empty and we've reached the end of the list, it's a palindrome
    if (S.empty() && it == l.end())
        cout << "Palindrome list." << endl;
    else
        cout << "Not a palindrome list." << endl;

    return 0;
}
