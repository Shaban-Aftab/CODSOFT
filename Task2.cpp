#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Simple Calculator Program\n";
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    double result;

    switch (operation) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            cout << "Error: Division by zero is not allowed.\n";
            return 1;
        }
        result = num1 / num2;
        break;
    default:
        cout << "Invalid operation. Please use +, -, *, or /.\n";
        return 1;
    }

    cout << "Result: " << result << endl;


}
