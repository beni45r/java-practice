#include <iostream>
using namespace std;

// Function to find the sum
int findSum(int arr[])
{
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    return sum;
}

// Function to find the largest number
int findLargest(int arr[])
{
    int largest = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

// Function to find the smallest number
int findSmallest(int arr[])
{
    int smallest = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    return smallest;
}

// Function to find the average
float findAverage(int arr[])
{
    return findSum(arr) / 5.0;
}

int main()
{
    int numbers[5];

    cout << "Enter 5 numbers:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }

    cout << "Sum = " << findSum(numbers) << endl;
    cout << "Largest = " << findLargest(numbers) << endl;
    cout << "Smallest = " << findSmallest(numbers) << endl;
    cout << "Average = " << findAverage(numbers) << endl;

    return 0;
}