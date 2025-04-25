#include <iostream>
#include <iomanip>  
using namespace std;
int main() {
    double balance = 1000.00;  
    double deposit_Amount;

    cout << "Current Balance: $" << fixed << setprecision(2) << balance << endl; 

    cout << "Enter amount to deposit: $";
    cin >> deposit_Amount;

    if (deposit_Amount <= 0) {
        cout << "Invalid amount! Please enter a positive value." << endl;
    } else {
        balance += deposit_Amount;
        cout << "Deposit successful! New balance: $" << balance << endl;
	}
    return 0;
}
