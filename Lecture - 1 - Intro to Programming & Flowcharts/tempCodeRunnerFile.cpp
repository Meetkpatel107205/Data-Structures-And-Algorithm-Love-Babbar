#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout << "Enter Length of Line - 1 : ";
    cin >> a;

    cout << "Enter Length of Line - 2 : ";
    cin >> b;

    cout << "Enter Length of Line - 3 : ";
    cin >> c;

    if((a + b) > c && (b + c) > a && (c + a) > b)
    {
        cout << "\nValid Triangle";
    }
    else
    {
        cout << "\nNot a Valid Triangle";
    }

    return 0;
}