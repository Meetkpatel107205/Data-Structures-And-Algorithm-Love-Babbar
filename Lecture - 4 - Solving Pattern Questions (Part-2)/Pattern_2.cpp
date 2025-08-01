#include<iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int i = 0;

    while(i < n)
    {
        int j = 0;
        while((n - j) > 0)
        {
            cout << (n - j);
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}