// Online C++ compiler to run C++ program online
#include <iostream>

int main()
{
    // Write C++ code here
    int c = 10;
    std::cout << "value of c : " << c << std::endl;

    // pointer
    int *ptr = &c;
    std::cout << "using &c : " << &c << std::endl;
    std::cout << "using ptr : " << ptr << std::endl;
    std::cout << "using *ptr we can see the value itself : " << *ptr << std::endl;

    *ptr = 15;
    std::cout << "using *ptr we can see the changed value : " << *ptr << std::endl;

    std::cout << "value of c : " << c << std::endl;

    // double pointer
    int **ptr2 = &ptr;
    std::cout << "value of **ptr is value of c itself: " << **ptr2 << std::endl;
    std::cout << "value of *ptr is address value of c itself: " << *ptr2 << std::endl;

    return 0;
}