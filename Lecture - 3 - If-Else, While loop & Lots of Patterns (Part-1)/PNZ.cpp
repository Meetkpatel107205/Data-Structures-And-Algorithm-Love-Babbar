#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Any Number : ";
    cin >> n;

    if(n > 0)
    {
        cout << "\nPositive";
    }
    else if(n < 0)
    {
        cout << "\nNegative";
    }
    else
    {
        cout << "\nZero";
    }

    return 0;
}