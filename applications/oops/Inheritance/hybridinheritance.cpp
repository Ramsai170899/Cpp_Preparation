// Hybrid inheritance is combination of 2 or more inheritance variations.
// in this example we will combine mutiple and hierarchical inheritance.

// multiple inheritance - single base class inherits from 2 or more parent classes
// hierarchical inheritance - single parent class is being inherited by multiple child classes.

#include <iostream>
using namespace std;

class A
{
public:
    void aspeak()
    {
        cout << "A is speaking" << endl;
    }
};

class B : public A
{
public:
    void bspeak()
    {
        cout << "B is speaking" << endl;
    }
};

class D
{
public:
    void dspeak()
    {
        cout << "D is speaking" << endl;
    }
};

class C : public A, public D
{
public:
    void cspeak()
    {
        cout << "C is speaking" << endl;
    }
};

int main()
{
    A a;
    B b;
    C c;
    D d;

    a.aspeak();

    b.aspeak();
    b.bspeak();

    c.aspeak();
    c.cspeak();
    c.dspeak();

    d.dspeak();
    return 0;
}