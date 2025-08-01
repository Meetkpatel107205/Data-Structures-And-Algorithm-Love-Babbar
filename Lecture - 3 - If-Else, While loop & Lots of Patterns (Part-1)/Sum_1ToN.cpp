#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Any Number : ";
    cin >> n;

    int i = 1;
    int sum = 0;

    cout << endl;

    while(i <= n)
    {
        sum += i;
        i++;
    }

    cout << "Sum from 1 To " << n << " is : " << sum;

    return 0;
}