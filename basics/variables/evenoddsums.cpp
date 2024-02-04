#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter a number : " << endl;
    cin >> n;
    int even = 0;
    int odd = 0;

    while (n > 0)
    {
        if ((n % 10) % 2 == 0)
        {
            cout << "even " << (n % 10) << endl;
            even = even + (n % 10);
        }
        else
        {
            cout << "odd " << (n % 10) << endl;
            odd = odd + (n % 10);
        }
        n = n / 10;
    }
    cout << even << " " << odd;
    return 0;
}