//  7 => 0000111 - if k=2 answer is yes !

#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int k = 0;

    if ((n >> (k - 1) & 1) == 1) // n after right shifting for (k-1) times, if done & operation and gets 1 then - kth position is 1.
        cout << "1" << endl;
    else
        cout << "0" << endl;

    return 0;
}