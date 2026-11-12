/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
**
** Class: 	CSC 242
** Assignment: 	Lesson # 1
** File: 	A1Problem1.cpp
** Description: Compute and print first and last digit of integer.
**
** Author: 	Suan Martinez
** Date: 	11/10/2026
** -------------------------------------------------------------------------*/
#include <iostream>
#include <cmath>
using namespace std;
/**
 * Purpose: Compute and find integers first and last digits.
 *
 * @result print the results to the console.
 */
int main()
{
    // Prompt for a number
    cout << "Enter an integer: ";
    // Store value
    int number;
    cin >> number;
    // calculate and store last number
    int last_number = number % 10;
    // calculate and store first number
    int first_number = number / pow(10, static_cast<int>(log10(number)));
    // display results
    cout << "First Number: " << first_number << "\nLast Number: " << last_number;
    // succesfully exit
    return 0;
}