// Hierarchical or Multilevel inheritance.

#include <iostream>
using namespace std;

class Animal // super class or base class
{
public:
    int age;

public:
    int getage()
    {
        return this->age;
    }
};

class dog : public Animal // derived class or child class of Animal
{
public:
    int height;

public:
    int getheight()
    {
        return this->height;
    }
};

class shihtzu : public dog // multilevel inheritance class inherits from all the parent classes.
{
public:
    string name;

public:
    string getname()
    {
        return this->name;
    }
};

int main()
{
    shihtzu obj; // object creation
    obj.age = 2; // object's data
    obj.height = 20;
    obj.name = "sind";

    cout << obj.getname() << endl; // object's methods
    cout << obj.getage() << endl;
    cout << obj.getheight() << endl;

    return 0;
}