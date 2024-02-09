#include <iostream>
using namespace std;

void kthbit(int n, int k)
{
    if (n >> (k - 1) & 1 == 1)
    {
        cout << "bit "<< k <<" is set to " << (n >> (k - 1) & 1) << endl;
    }
    else
    {
        cout << "bit " << k << " is set to " << (n >> (k - 1) & 1) << endl;
    }
}

void bitsset(int n)
{
    int result = 0;
    int temp = n;
    while (temp > 0)
    {
        if ((temp & 1) == 1)
        {
            result++;
        }
        temp = (temp >> 1);
    }
    cout << "number of bits set in " << n << " is " << result << endl;
}

int main()
{
    kthbit(5, 3);
    kthbit(10, 3);
    kthbit(15, 5);
    kthbit(16, 5);

    bitsset(10); // 001010 => therefore 2 bits are set to 1.
    bitsset(15); // 001111 => therefore 4 bits are set to 1.
}

// 256 128 64 32 16 8 4 2 1
// 5 => 000101
// right shift the bits for (k-1) times.

// 001010 => 10
// shift the numbers for (3-1) times.
// 000010 & 000001 => results 0.

// 15 => 001111
// asked about the 5th bit => 0

// 16 => 010000
// asked about the 5th bit => 1
