#include<iostream>
#include <cstdlib> 
#include <ctime>
#include <string>
using namespace std;

class SavingsAccount {
    string name;
    int acc_no;
    float balance;
    static int next_acc_no;
    static float rate_of_interest;

public:
    // Default constructor
    SavingsAccount() : name("Unnamed"), acc_no(next_acc_no++), balance(1000) {}

    // Parameterized constructor
    SavingsAccount(string n, float b) {
        name = n;
        acc_no = next_acc_no++;
        balance = b;
    }

    void withdraw() {
        cout << "How much would you like to withdraw? ";
        int x_amt;
        cin >> x_amt;
        if (x_amt > balance || balance - x_amt < 1000) {
            cout << "Insufficient balance." << endl;
        } else {
            balance -= x_amt;
            cout << "Remaining balance: " << balance << endl;
        }
    }

    void deposit() {
        cout << "How much would you like to deposit? ";
        int y_amt;
        cin >> y_amt;
        balance += y_amt;
        cout << "Current balance: " << balance << endl;
    }

    float calculate_interest() const {
        return balance * rate_of_interest / 100;
    }

    void add_interest() {
        float interest = calculate_interest();
        balance += interest;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << acc_no << endl;
        cout << "Balance: " << balance << endl;
    }

    // Static function to set interest rate
    static void set_interest_rate(float rate) {
        rate_of_interest = rate;
    }
};

// Initialize static members
int SavingsAccount::next_acc_no = 1;
float SavingsAccount::rate_of_interest = 5.0;

int main() {
    srand(time(0));

    SavingsAccount accounts[100];

    // Initialize accounts with random balances
    for (int i = 0; i < 100; i++) {
        string name = "Account Holder " + to_string(i + 1);
        float balance = (rand() % 90000) + 1000; // Random balance between 1000 and 100000
        accounts[i] = SavingsAccount(name, balance);
    }

    // Calculate and add interest to each account
    float total_interest = 0;
    for (int i = 0; i < 100; i++) {
        float interest = accounts[i].calculate_interest();
        total_interest += interest;
        accounts[i].add_interest();
    }

    // Print total interest
    cout << "Total interest to be paid to all accounts in one year: Rs. " << total_interest << endl;

    // Print details of each account
    for (int i = 0; i < 100; i++) {
        accounts[i].display();
        cout << endl;
    }

    return 0;
}


