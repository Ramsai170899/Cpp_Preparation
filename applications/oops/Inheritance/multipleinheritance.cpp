#include <iostream>
using namespace std;

class A
{
public:
    int a;

public:
    void Aspeaks()
    {
        cout << "A speaking" << endl;
    }
};

class B
{
public:
    int b;

public:
    void Bspeaks()
    {
        cout << "B speaking" << endl;
    }
};

class C : public A, public B
{
public:
    int c;

public:
    void Cspeaks()
    {
        cout << "C speaking" << endl;
    }
};

int main()
{
    C obj; // obj is an object of class C.
    cout << obj.a << endl;
    cout << obj.b << endl;
    cout << obj.c << endl;

    obj.Aspeaks(); // method of class A is being accessed by the obj of C.
    obj.Bspeaks(); // method of class B is being accessed by the obj of C.
    obj.Cspeaks();

    return 0;
}