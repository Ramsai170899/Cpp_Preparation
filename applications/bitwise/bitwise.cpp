// Finding the "k"th bit is set or not set given some number "n"

#include <iostream>
using namespace std;

int main()
{
    int n = 5; // binary format of 5 is [000101]
    int k = 2; // the 2nd bit in binary form is 0 so the task is to print "no".

    cout << (n >> (k - 1)) << endl; // this prints "2". i.e; 000010. now the task is to identify the last bit is 0 or 1
    if ((n >> (k - 1)) & 1 == 1) // if the right shifted number, performed & with 1 and if equals to 1 => bit is set else not set.
    {
        cout << "set to 1";
    }
    else
    {
        cout << "not set to 1";
    }
}