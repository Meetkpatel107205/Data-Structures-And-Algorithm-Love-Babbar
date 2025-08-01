#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout << "Enter First Number : ";
    cin >> a;

    cout << "Enter Second Number : ";
    cin >> b;

    if(a > b)
    {
        cout << "Greatest Number is : " << a;
    }
    else
    {
        cout << "Greatest Number is : " << b;
    }

    // The cin.get() function is used to read a single character, including whitespace characters like spaces, tabs, and newline (\n), which cin >> normally ignores.

    return 0;
}