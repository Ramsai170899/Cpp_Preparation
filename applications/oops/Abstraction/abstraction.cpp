// Implementation Hiding is called as abstraction.
// usage of access modifers - public , protected , private.

// public item of base class through public access modifier inheritance can be accessed anywhere.
// public item of base class through protected access modifier inheritance can be accessed within the class.
// public item of base class through public access modifier inheritance can be accessed within the class.

// protected item of base class through public access modifier inheritance can be accessed within the class.
// protected item of base class through protected access modifier inheritance can be accessed within the class.
// protected item of base class through private access modifier inheritance can be accessed within the class.

// private item of base class through public access modifier inheritance cannotbe accessed.
// private item of base class through protected access modifier inheritance cannot be accessed.
// private item of base class through private access modifier inheritance cannot be accessed.

#include <iostream>
using namespace std;

//--------------------------------------------------------------------------------------------------------------------------

class A
{
public:
    int a;

public:
    void aa()
    {
        cout << "class A - aa" << endl;
    }
};

//--------------------------------------------------------------------------------------------------------------------------

class B : private A
{
public:
    int b;

public:
    void ab()
    {
        aa();
    }

    void bb()
    {
        cout << "class B - bb " << endl;
    }
};

//--------------------------------------------------------------------------------------------------------------------------

int main()
{
    B obj;
    obj.ab();
    obj.aa(); // cannot be accessed outside the child class....
    return 0;
}