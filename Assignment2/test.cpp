#include <iostream>
using namespace std;
int main()
{
    // store variable
    int numSum = 0;
    int input;
    // prompt user
    cout << "Enter number to add, q to quit: " << endl;
    while (cin >> input)
    {
        numSum += input;
    }
    cout << "Total Sum: " << numSum;
    return 0;
}