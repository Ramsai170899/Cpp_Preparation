// class , object , class's attributes and methods => Encapsulation
// binding the data and methods of any entity (class) within itself - Encapsulation
// attributes and methods are to be accessed with in the access modifiers scope.

#include <iostream>
using namespace std;

class human // human class
{
public:      // abstraction - access modifier
    int age; // class attributes
    string name; // class attributes

public:
    int setage(int newage) // class methods
    {
        return age = newage;
    }

    string setname(string newname) // class methods
    {
        return name = newname;
    }

    string getname() // class methods
    {
        return this->name;
    }
};

int main()
{
    human obj1; // class human's object creation.

    obj1.setage(5);                 // set the object's attribute.
    cout << obj1.age << endl;       // accessing class's attributes through obj
    obj1.setname("Ramsai");         // accessing methods of human class using object.
    cout << obj1.getname() << endl; // accessing object's data.

    human obj2;
    obj2.age = 10;
    obj2.name = "krishna";

    cout << obj2.getname() << endl;
    cout << obj2.age << endl;
}