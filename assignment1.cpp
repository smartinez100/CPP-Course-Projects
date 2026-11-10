#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Enter number: ";
    int number; 
    cin >> number;
    int last_number = number % 10;
    int first_number = number / pow(10, static_cast<int>(log10(number)));
    cout << first_number << " " << last_number;
    return 0;
}