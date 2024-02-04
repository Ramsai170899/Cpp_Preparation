// intoduction of scope resolution operator. (::)

#include <iostream>
using namespace std;

class A
{
public:
    void speak()
    {
        cout << "A is speaking" << endl;
    };
};

class B
{
public:
    void speak()
    {
        cout << "B is speaking" << endl;
    };
};

class C : public A, public B
{
public:
    int c;
};

int main()
{
    C obj;
    obj.A ::speak();
    obj.B ::speak();

    return 0;
}