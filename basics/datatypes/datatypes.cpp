/*

Data Type	Size	Description
boolean	1 byte	Stores true or false values
char	1 byte	Stores a single character/letter/number, or ASCII values
int	2 or 4 bytes	Stores whole numbers, without decimals
float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits

*/

#include <iostream>
using namespace std;

int main()
{
    int number = 100;
    double dnumber = 9.951236547;
    float fnumber = 6.3012;
    char character = 's';
    string stringvariable = "Ramsai";
    bool mybool = true;

    cout << number << endl;
    cout << dnumber << endl;
    cout << fnumber << endl;
    cout << character << endl;
    cout << stringvariable << endl;
    cout << mybool << endl;

    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1;
    cout << d1;

    return 0;
}