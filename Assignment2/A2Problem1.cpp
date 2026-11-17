/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
** 
** Class: 	CSC 242
** Assignment: 	Lesson 2
** File: 	A2Problem1.cpp
** Description: Calculate and display the monthly value of a CD
**
** Author: 	Suan Martinez
** Date: 	11/16/2026
** -------------------------------------------------------------------------*/
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

int main()
{
    /*declare variables to store the deposit, APY, and maturity period*/    
    double currentBalance;
    double annualRate;
    int monthsAccrued;

    //prompt user for values
    cout << "Enter initial balance amount: ";   
    cin >> currentBalance;
    cout << "Enter Annual Percentage Yield: ";
    cin >> annualRate;   
    cout << "Enter number of months: ";
    cin >> monthsAccrued;
    //validate info, if invalid throw exception
    if(cin.fail() || currentBalance < 0 || annualRate < 0 || monthsAccrued <= 0)
    {
        throw invalid_argument("Invalid value entered. Try again");
    }
    
    //print header  
    cout << "Month \tCD Value\n";
    for(int i = 0; i < monthsAccrued; i++)
    {
        /*calculate the new CD balance using        monthly compound interest*/
        
        currentBalance = currentBalance + (currentBalance * annualRate/1200);
        /*print values associated with headers 
          in the current iteration*/
        cout << i + 1 << " \t" << fixed << setprecision(2) << currentBalance << "\n";
    }
    return 0;
}