// Runtime polymorphism or Dynamic polymorphism.
// Function/method over riding.

/*
Rules :
    1. method of parent class and child class has to be same.
    2. method of parent class and child class must have same number of parameters.
    3. Only possible only through Inheritance.

*/

#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Animal barks....\n";
    }
};

class Human : public Animal
{
public:
    void speak()
    {
        cout << "Human speaks....\n";
    }
};

int main()
{
    Human obj;
    obj.speak(); //  when there is method which has same name after inheriting, the base class implementation is selected if it is present.

    return 0;
}