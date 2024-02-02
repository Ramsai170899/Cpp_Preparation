#include <iostream>
using namespace std;

int main()
{
    string text = "abcdefghijklmnopqrstuvwxyz";
    cout << "Length of the text is : " << text.length() << endl;
    cout << "size of given text is : " << text.size() << endl;
    cout << text[25] << endl;
    cout << text[26] << endl;

    string newtext = "This is a \"very big statement\" about strings.";
    cout << newtext << endl;
    return 0;
}