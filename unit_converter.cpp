#include <iostream>
#include <iomanip>

using namespace std;

// Function to convert length
void convertLength() {
    double value;
    int choice;

    cout << "\nChoose the conversion type for Length:\n";
    cout << "1. Meters to Kilometers\n";
    cout << "2. Kilometers to Miles\n";
    cout << "3. Inches to Feet\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the value to convert: ";
    cin >> value;

    switch (choice) {
        case 1:
            cout << value << " meters = " << value / 1000 << " kilometers\n";
            break;
        case 2:
            cout << value << " kilometers = " << value * 0.621371 << " miles\n";
            break;
        case 3:
            cout << value << " inches = " << value / 12 << " feet\n";
            break;
        default:
            cout << "Invalid choice!\n";
    }
}

// Function to convert weight
void convertWeight() {
    double value;
    int choice;

    cout << "\nChoose the conversion type for Weight:\n";
    cout << "1. Kilograms to Pounds\n";
    cout << "2. Grams to Ounces\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the value to convert: ";
    cin >> value;

    switch (choice) {
        case 1:
            cout << value << " kilograms = " << value * 2.20462 << " pounds\n";
            break;
        case 2:
            cout << value << " grams = " << value * 0.035274 << " ounces\n";
            break;
        default:
            cout << "Invalid choice!\n";
    }
}

// Function to convert temperature
void convertTemperature() {
    double value;
    int choice;

    cout << "\nChoose the conversion type for Temperature:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Celsius to Kelvin\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the temperature to convert: ";
    cin >> value;

    switch (choice) {
        case 1:
            cout << value << " °C = " << (value * 9 / 5) + 32 << " °F\n";
            break;
        case 2:
            cout << value << " °F = " << (value - 32) * 5 / 9 << " °C\n";
            break;
        case 3:
            cout << value << " °C = " << value + 273.15 << " K\n";
            break;
        default:
            cout << "Invalid choice!\n";
    }
}

// Function to convert time
void convertTime() {
    double value;
    int choice;

    cout << "\nChoose the conversion type for Time:\n";
    cout << "1. Seconds to Minutes\n";
    cout << "2. Minutes to Hours\n";
    cout << "3. Hours to Days\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the time to convert: ";
    cin >> value;

    switch (choice) {
        case 1:
            cout << value << " seconds = " << value / 60 << " minutes\n";
            break;
        case 2:
            cout << value << " minutes = " << value / 60 << " hours\n";
            break;
        case 3:
            cout << value << " hours = " << value / 24 << " days\n";
            break;
        default:
            cout << "Invalid choice!\n";
    }
}

// Main menu
void displayMenu() {
    int option;
    do {
        cout << "\n--- Unit Converter Tool ---\n";
        cout << "1. Convert Length\n";
        cout << "2. Convert Weight\n";
        cout << "3. Convert Temperature\n";
        cout << "4. Convert Time\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> option;

        switch (option) {
            case 1:
                convertLength();
                break;
            case 2:
                convertWeight();
                break;
            case 3:
                convertTemperature();
                break;
            case 4:
                convertTime();
                break;
            case 5:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (option != 5);
}

// Main function
int main() {
    displayMenu();
    return 0;
}
