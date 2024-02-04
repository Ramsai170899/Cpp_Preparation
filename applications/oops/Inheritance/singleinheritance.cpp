#include <iostream>
using namespace std;

class Animal
{
public:
    string name;
    int age;
};

class dog : public Animal
{
public:
    int height;
};

int main()
{
    dog d;
    d.name = "kittu"; // attribute of Animal class, accessed using single inheritance by dog class.
    cout << d.age << endl;
    cout << d.height << endl;
    cout << d.name << endl;

    return 0;
}