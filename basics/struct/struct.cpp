#include <iostream>
using namespace std;

struct car
{
    string name;
    int seater;
    char classofcar;
};

int main()
{
    car car1;
    car1.name = "maruthi";
    car1.seater = 4;
    car1.classofcar = 'A';

    car car2;
    car2.name = "benz";
    car2.seater = 4;
    car2.classofcar = 'C';

    cout << car1.name << " " << car1.classofcar << endl;
    cout << car2.name << " " << car2.classofcar << endl;
}