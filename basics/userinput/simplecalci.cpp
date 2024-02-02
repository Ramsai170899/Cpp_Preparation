// simple calculator usage of cin and cout.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter value of a : ";
    cin >> a;
    cout << "enter value of b : ";
    cin >> b;

    cout << "a+b : " << a + b << endl;
    cout << "a-b : " << a - b << endl;
    cout << "a*b : " << a * b << endl;
    cout << "a/b : " << a / b << endl;

    return 0;
}