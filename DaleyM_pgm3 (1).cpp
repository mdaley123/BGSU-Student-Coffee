
#include <iomanip>
// Maya Daley CS 2010 11:30 am
//Purpose- To Display the menu of a new coffee shop
//Input - Data that is needed are ther prices of the type of coffee, the strength
//of the coffee, calculations for change, and the prompts for the user's input
//Processing- using the calucations which were change = payment minus cost
//Output- I am unable to get the output because my visual code does not run or debug.
#include <iostream>
using namespace std;

int main() {
    char choice;
    int strength;
    double cost = 0.0;

    while (true) {
        // Display menu
        cout << "Coffee Menu:" << endl;
        cout << "B - Brewed $2.93" << endl;
        cout << "E - Espresso $4.39" << endl;
        cout << "C - Cappuccino $4.99" << endl;
        cout << "L - Latte $5.47" << endl;
        cout << "Q - Quit" << endl;
        
        // Prompt for choice options
        cout << "Please select a coffee (B/E/C/L/Q): ";
        cin >> choice;

        // Check for quit option
        if (choice == 'Q') {
            cout << "Goodbye!" << endl;
            break;
        }

        // Validate user choice
        if (choice != 'B' && choice != 'E' && choice != 'C' && choice != 'L') {
            cout << "Invalid choice. Please select a valid item." << endl;
            continue;
        }

        // Prompt for strength
        cout << "Select the strength (1-Light, 2-Regular, 3-Dark): ";
        cin >> strength;

        // Validate strength input
        if (strength < 1 || strength > 3) {
            cout << "Invalid strength. Please select a valid strength." << endl;
            continue;
        }

        // Calculate cost based on choice and strength
        switch (choice) {
            case 'B':
                cost = 2.93;
                break;
            case 'E':
                cost = 4.39;
                break;
            case 'C':
                cost = 4.99;
                break;
            case 'L':
                cost = 5.47;
                break;
        }

        if (strength == 3) {
            cost += 0.23;
        }

        // Display cost
        cout << "The cost of your selection is: $" << fixed << setprecision(2) << cost << endl;

        // Prompt for payment
        double payment;
        cout << "Enter the payment amount: $";
        cin >> payment;

        // Handle payment
        while (payment < cost) {
            cout << "Insufficient payment. Amount still to be paid: $" << fixed << setprecision(2) << cost - payment << endl;
            cout << "Enter additional money: $";
            cin >> payment;
        }

        // Calculate and display change
        if (payment > cost) {
            double change = payment - cost;
            cout << "Change to be refunded: $" << fixed << setprecision(2) << change << endl;
        }

        // Insert blank lines
        cout << setfill('\v') << setw(12) << endl;


    return 0;
}
