#include<iostream>
using namespace std;

int main()
{
    float fahrenheit;

    cout << "Enter Value of Temperature in fahrenheit : ";
    cin >> fahrenheit;

    float celsius = (fahrenheit - 32) * (5 / 9);

    cout << "\nTemperatur in Celsius is : " << celsius << " deg";

    // Fahrenheit = (Celsius × 9/5) + 32
    // Celsius = (Fahrenheit − 32) × 5/9

    return 0;
}