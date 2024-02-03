#include <iostream>
using namespace std;

void simpleprint()
{
    cout << "i am here !" << endl; // function with no parameter and no return type.
}

void printing(string name)
{
    cout << "My name is " << name << endl; // void function -> returns nothing
}

int add(int a, int b)
{
    int result = a + b;
    return result; // int return function with 2 int parameters.
}

int main()
{
    simpleprint();
    printing("Ramsai");
    int addresult = add(10, 15); // function calls.
    cout << "addition result : " << addresult << endl;
}