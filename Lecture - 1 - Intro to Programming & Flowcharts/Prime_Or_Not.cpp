#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Any Number : ";
    cin >> n;

    if(n < 2)
    {
        cout << "\nNot Prime";
    }
    else
    {
        for(int i = 2; i <= (n - 1); i++)
        {
            if(n % i == 0)
            {
                cout << "\nNot Prime";
                return 0;
            }
        }
        cout << "\nPrime";
    }

    return 0;
}