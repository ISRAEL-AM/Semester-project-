#include <iostream>
using namespace std;

int main() {
    int choice;
    double voltage, current, resistance;

    cout << "==============================" << endl;
    cout << "   OHM'S LAW SOLVER PROGRAM   " << endl;
    cout << "==============================" << endl;

    cout << "\nChoose what you want to calculate:\n";
    cout << "1. Voltage (V)\n";
    cout << "2. Current (I)\n";
    cout << "3. Resistance (R)\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nEnter Current (I) in Amperes: ";
        cin >> current;
        cout << "Enter Resistance (R) in Ohms: ";
        cin >> resistance;

        voltage = current * resistance;
        cout << "\nVoltage (V) = " << voltage << " Volts" << endl;
    }
    else if (choice == 2) {
        cout << "\nEnter Voltage (V) in Volts: ";
        cin >> voltage;
        cout << "Enter Resistance (R) in Ohms: ";
        cin >> resistance;

        current = voltage / resistance;
        cout << "\nCurrent (I) = " << current << " Amperes" << endl;
    }
    else if (choice == 3) {
        cout << "\nEnter Voltage (V) in Volts: ";
        cin >> voltage;
        cout << "Enter Current (I) in Amperes: ";
        cin >> current;

        resistance = voltage / current;
        cout << "\nResistance (R) = " << resistance << " Ohms" << endl;
    }
    else {
        cout << "\nInvalid choice! Please run the program again." << endl;
    }

    cout << "\nThank you for using the Ohm's Law Solver!" << endl;
    return 0;
}