#include <iostream>

using namespace std;
/**
 * Purpose: Find the amount of values within the array that are larger than the average
 * 
 * @param nums the array tied with the average
 * @param size the size of array
 * @param average the calculated average of array
 * @return the amount of values larger than average
 */
int countAboveAverage(int nums[], int size, double average)
{
    
    int countNumsLarger = 0;

    for(int i = 0; i < size; i++)
    {
        if(nums[i] > average)
        {
            countNumsLarger++;
        }
    }

    return countNumsLarger;
}
/**
 * Purpose: Find the largest number within an array
 * @param nums the array to scan
 * @param size the size of array
 * @return the largest number
 */
int findLargest(int nums[], int size)
{
    int largestNum = nums[0];
    for(int i = 1; i < size; i++)
    {
        if(nums[i] > largestNum)
        {
            largestNum = nums[i];
        }
    }
    return largestNum;
}
/**
 * Purpose: Display the values within an array
 * 
 * @param nums the array to display
 * @param size the size of the array
 */
void displayValues(int nums[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(i == size - 1)
        {
            cout << nums[i] << endl;
            continue;
        }
        cout << nums[i] << ", ";
    }
}
/**
 * Purpose: Insert values into an array from the user
 * 
 * @param nums the array to modify
 * @param size the size of the aray
 */
void readValues(int nums[], int size)
{
    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter digit " << i + 1 << " of " << size << ": ";
        cin >> nums[i];
    }
}
/**
 * Purpose: Calculate the average of the array values 
 * 
 * @param nums the array with values
 * @param size the size of array
 * @return the average of the array values
 */
double calculateAverage(int nums[], int size)
{
    double sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += nums[i]; 
    }
    return sum / static_cast<double>(size);
}

int main()
{
    const int size = 10;
    int nums[size];
    readValues(nums, size);
    double average = calculateAverage(nums, size);
    
    cout << "Values: ";
    displayValues(nums, size);
    cout << "Average: " << average << endl;
    cout << "Largest: " << findLargest(nums, size) << endl;
    cout << "Values above average: " << countAboveAverage(nums, size, average) << endl;

     

}