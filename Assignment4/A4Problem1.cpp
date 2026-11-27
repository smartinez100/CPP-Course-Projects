#include <iostream>

using namespace std;
int getDigit(const int number)
{
    return number % 10 + (number / 10) % 10;
}
int sumEvenNumbers(const string cardNumber)
{
    int sum = 0;
    for(int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}
int sumOddNumbers(string cardNumber)
{
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += getDigit(cardNumber[i] - '0');
    }
    return sum;

}
int main()
{
    string cardNumber;
    int result = 0;

    cout << "Type in a card number: " << endl;
    getline(cin, cardNumber);

    result = sumEvenNumbers(cardNumber) + sumOddNumbers(cardNumber);
    
    if(result % 10 == 0)
    {
        cout << cardNumber << " result is valid";
    }
    else
    {
        cout << cardNumber << " result is not valid";
    }
}