#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter Any Character : ";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z')
    {
        cout << "\nLowercase";
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        cout << "\nUppercase";
    }
    else if(ch >= '0' && ch <= '9')
    {
        cout << "\nThis is Numeric";
    }
    else
    {
        cout << "\nInvalid Character";
    }

    return 0;
}