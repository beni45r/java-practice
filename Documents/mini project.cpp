#include <iostream>
#include <string>
using namespace std;

string name;
int marks[5];

void inputName()
{
    cout << "Enter student name: ";
    getline(cin, name);
}

void inputMarks()
{
    cout << "Enter 5 subject marks:\n";
    for(int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
}

int total()
{
    int sum = 0;
    for(int i = 0; i < 5; i++)
        sum += marks[i];
    return sum;
}

float average()
{
    return total() / 5.0;
}

int highest()
{
    int high = marks[0];
    for(int i = 1; i < 5; i++)
        if(marks[i] > high)
            high = marks[i];
    return high;
}

int lowest()
{
    int low = marks[0];
    for(int i = 1; i < 5; i++)
        if(marks[i] < low)
            low = marks[i];
    return low;
}

char grade()
{
    float avg = average();

    if(avg >= 90)
        return 'A';
    else if(avg >= 80)
        return 'B';
    else if(avg >= 70)
        return 'C';
    else if(avg >= 60)
        return 'D';
    else
        return 'F';
}

int main()
{
    inputName();
    inputMarks();

    cout << "\nStudent Name: " << name << endl;
    cout << "Total: " << total() << endl;
    cout << "Average: " << average() << endl;
    cout << "Highest Mark: " << highest() << endl;
    cout << "Lowest Mark: " << lowest() << endl;
    cout << "Grade: " << grade() << endl;

    return 0;
}