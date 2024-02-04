// Hierarchical inheritance allows one single class to be parent class for multiple child classes.
// in the example, Class A is inherited by class B and class C.

#include <iostream>
using namespace std;

class A
{
public:
    int a;
};

class B : public A
{
public:
    int b;
};

class C : public A
{
public:
    int c;
};

int main()
{
    B obj1; // class B's object - obj1 is accessing data of class A and B
    cout << obj1.a << endl;
    cout << obj1.b << endl;

    C obj2; // class C's object - obj2 is accessing data of class A and C
    cout << obj2.a << endl;
    cout << obj2.c << endl;

    return 0;
}