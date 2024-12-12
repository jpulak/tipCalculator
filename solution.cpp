// Function to calculate the tip amount based on sales and percentage

#include <iostream>
#include <iomanip>
using namespace std;

// Func- calc percentage to num 

double calcTipAmt(double sale, double tipPerc) {
    return sale * (tipPerc / 100);
}

// Function to display the menu and return user's choice

char getMenuItem(double sale) {
    cout << "\n\t\t\tTip Calculator\n\n";
    cout << "\tT - 10 percent tip of $" << fixed << setprecision(2) << calcTipAmt(sale, 10) << endl;
    cout << "\tF - 15 percent tip of $" << calcTipAmt(sale, 15) << endl;
    cout << "\tW - 20 percent tip of $" << calcTipAmt(sale, 20) << endl;
    cout << "\tP - Custom tip percentage \n";
    cout << "\tA - Custom tip amount \n";
    cout << "Enter your menu choice [T, F, W, P, A]: ";

    char choice;
    cin >> choice;
    return static_cast<char>(toupper(choice));
}

// Function to calculate total sale with tip

double calcTotalSale(double sale, double tip) {
    return sale + tip;
}

// Function to display final sales, tip, and total

void displayResults(double sale, double tip, double total) {
    cout << fixed << setprecision(2);
    cout << "\nSales Amount: $" << sale << endl;
    cout << "Tip Amount: $" << tip << endl;
    cout << "Total Due: $" << total << endl;
}

// Main Function

int main() {
    double sale;
    cout << "Enter the amount of the sale: ";
    cin >> sale;

    // Validate the sale amount
    
    if (sale <= 0) 
    {
        cout << "Error, invalid sales amount entered.\n";
        return 0;
    }

    char choice = getMenuItem(sale);
    double tip = 0.0;

    // Handle menu choice
    
    if (choice == 'T') 
    {
        tip = calcTipAmt(sale, 10);
    } 
    else if (choice == 'F') 
    {
        tip = calcTipAmt(sale, 15);
    } 
    else if (choice == 'W') 
    {
        tip = calcTipAmt(sale, 20);
    } 
    else if (choice == 'P') 
    {
        double tipPerc;
        cout << "Enter the custom tip percentage: ";
        cin >> tipPerc;

        // Validate custom tip percentage
        
        if (tipPerc < 0) 
        {
            cout << "\nError, invalid percentage entered.\n";
            cout << "Valid percentages are non-negative.\n";
            return 0;
        }
        tip = calcTipAmt(sale, tipPerc);
    } 
    else if (choice == 'A') 
    {
        cout << "Enter the custom tip amount: ";
        cin >> tip;

        // Validate custom tip amount
        
        if (tip < 0) 
        {
            cout << "\nError, invalid tip amount entered.\n";
            cout << "Valid amounts are non-negative.\n";
            return 0;
        }
    } 
    else 
    {
        cout << "\nError, invalid menu choice entered.\n";
        return 0;
    }

    // Calculate and display the total sale
    
    double total = calcTotalSale(sale, tip);
    displayResults(sale, tip, total);
    return 0;
}
