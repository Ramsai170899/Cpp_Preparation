#include <iostream>
using namespace std;

int main()
{
    string fname = "Ramsai";
    cout << "first name : " << fname << endl;
    string lname = "Jagadish";
    cout << "last name : " << lname << endl;
    cout << "full name : " << fname + " " + lname << endl;

    string firstName = "Ramsai ";
    string lastName = "Jagadish";
    string fullName = firstName.append(lastName);
    cout << "appended : "<<fullName;
    return 0;
}