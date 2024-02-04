// Function overloading & operator overloading
// Function overloading  - same function with multiple form

#include <iostream>
using namespace std;

class Functionoverloading
{
public:
    void greet()
    {
        cout << "Hello World !" << endl;
    }

    void greet(string name)
    {
        cout << "Hello " << name << endl;
    }
};

class operatoroverloading
{
public:
    int a;
    int b;

public:
    void operator+(operatoroverloading &obj) // function which is performing operator overloading.
    {
        int val1 = this->a;
        int val2 = obj.a;
        cout << val2 - val1 << endl; // definition of new custom operator.
    }

    void operator-(operatoroverloading &obj)
    {
        cout << "This is operator overloading ! : " << this->a << endl;
    }

    void operator()()
    {
        cout << "this is ! operator... " << this->a << endl;
    }
};

int main()
{
    Functionoverloading obj1; // function overloading
    obj1.greet();
    obj1.greet("Ramsai");

    operatoroverloading obj2, obj3; // opearator overloading
    obj2.a = 5;
    obj3.a = 10;

    obj2 + obj3; // calling the operator's function.
    obj2 - obj3;
    obj3();
    return 0;
}