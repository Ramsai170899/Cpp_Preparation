#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing some shape..." << endl; // Base class implementation
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing circle..." << endl; // Specific implementation for Circle
    }
};

class Square : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing square..." << endl; // Specific implementation for Square
    }
};

int main()
{
    Shape *shape1 = new Circle();
    shape1->draw();

    Shape *shape2 = new Square();
    shape2->draw();

    delete shape1;
    delete shape2;

    return 0;
}
