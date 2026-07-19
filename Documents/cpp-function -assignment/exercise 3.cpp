#include <iostream>
using namespace std;

// Function for addition
float add(float a, float b)
{
    return a + b;
}

// Function for subtraction
float subtract(float a, float b)
{
    return a - b;
}

// Function for multiplication
float multiply(float a, float b)
{
    return a * b;
}

// Function for division
float divide(float a, float b)
{
    return a / b;
}

int main()
{
    int choice;
    float num1, num2;

    cout << "===== Simple Calculator =====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result = " << add(num1, num2);
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result = " << subtract(num1, num2);
            break;

        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result = " << multiply(num1, num2);
            break;

        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;

            if (num2 == 0)
            {
                cout << "Error! Division by zero is not allowed.";
            }
            else
            {
                cout << "Result = " << divide(num1, num2);
            }
            break;

        case 5:
            cout << "Program exited.";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}