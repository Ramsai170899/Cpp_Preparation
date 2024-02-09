#include <iostream>
using namespace std;

#pragma pack(1)

struct structA
{
    char a;
    int b;
    double c;
};

int main()
{
    cout << "sizeof(structA) = " << sizeof(structA);

    return 0;
}
