/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
**
** Class: 	CSC 242
** Assignment: 	Lesson # 1
** File: 	A1Problem2.cpp
** Description: Phone Number Format
**
** Author: 	Suan Martinez
** Date: 	11/10/2026
** -------------------------------------------------------------------------*/
#include <iostream>
#include <string>
using namespace std;
/**
 * Purpose: Format 10 digit phone number into legible format.
 *
 * @result prints the results to the console.
 */
int main()
{
    // Store phone number in string format
    string full_phone_number = "8585651413";
    // Insert opening and closing brackets followed by colon
    string bracket_insertion = "(" + full_phone_number.substr(0, 3) + "): ";
    // Insert hyphen in between the third and fourth number in the local number
    string hyphen_insertion = full_phone_number.substr(3, 3) + "-" + full_phone_number.substr(6, 4);
    // Concatenate and display the result
    cout << bracket_insertion + hyphen_insertion << endl;
    // Exit succesfully
    return 0;
}