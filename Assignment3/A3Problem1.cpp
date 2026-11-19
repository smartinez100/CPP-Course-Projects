#include <iostream>

using namespace std;

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

void readValues(int nums[], int size)
{
    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter digit " << i + 1 << " of " << size << ": ";
        cin >> nums[i];
    }
}
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