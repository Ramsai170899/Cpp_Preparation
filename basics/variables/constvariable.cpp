// const keyword is used when there is no need to change the value of the variable later.

#include <iostream>
using namespace std;

int main()
{
    const int a = 10;
    a = 1;
    cout << a << endl;
    return 0;
}

/*
constvariable.cpp: In function 'int main()':
constvariable.cpp:9:7: error: assignment of read-only variable 'a'
    9 |     a = 1;
      |     ~~^~~
*/