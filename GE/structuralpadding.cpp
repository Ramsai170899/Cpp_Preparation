// Insertion of additional bytes between the members of class to improve the data memebers alignment in the memory - structural padding.
// efficient in accessing the memory
// but decreases the overall efficiency.

#include <iostream>
using namespace std;

#pragma pack(1)

struct abc
{
    int a;
    char b;
    int c;
};

int main()
{
    cout << "size of struct abc is : " << sizeof(abc);
    return 0;
}