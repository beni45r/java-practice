#include <iostream>
#include <string>
using namespace std;

// Function to calculate total marks
int calculateTotal(int marks[])
{
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        total += marks[i];
    }

    return total;
}

// Function to calculate average
float calculateAverage(int total)
{
    return total / 5.0;
}

// Function to determine grade
char calculateGrade(float average)
{
    if (average >= 90)
        return 'A';
    else if (average >= 80)
        return 'B';
    else if (average >= 70)
        return 'C';
    else if (average >= 60)
        return 'D';
    else
        return 'F';
}

int main()
{
    string name;
    int marks[5];

    cout << "Enter student's name: ";
    getline(cin, name);

    cout << "Enter marks for 5 subjects:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }

    int total = calculateTotal(marks);
    float average = calculateAverage(total);
    char grade = calculateGrade(average);

    cout << "\n----- Student Result -----" << endl;
    cout << "Student Name: " << name << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}