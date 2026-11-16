#include <iostream>
using namespace std;

class Bank {
    public:
    int accNum, Bal = 0, money;
    string name;

    void input() {
        cout << "Enter your account number : " << endl;
        cin >> accNum;

        cout << "Enter your name : " << endl;
        getline(cin >> ws,name);
    }

    void deposite() {
        cout << "Enter the amount you want to deposit in the bank : " << endl;
        cin >> money;

        try {
            if (money <= 0)
                throw "Invalid Amount! Deposit must be positive!";

            Bal += money;
            cout << "Amount deposited successfully!" << endl;
        }
        catch (const char* msg) {
            cout << msg << endl;
        }
    }

    void withdrawl() {
        cout << "Enter the amount you want to withdraw from the bank : " << endl;
        cin >> money;

        try {
            if (money <= 0)
                throw "Invalid withdrawal amount!";

            if (money > Bal)
                throw "Insufficient balance!";

            Bal -= money;
            cout << "Withdrawal successful!" << endl;
        }
        catch (const char* msg) {
            cout << msg << endl;
        }
    }

    void display() {
        cout << "\nAccount name : " << name;
        cout << "\nAccount number : " << accNum << endl;
        cout << "You have total " << Bal << "$ in the bank" << endl;
    }
};

int main() {
    Bank bank;

    bank.input();
    bank.deposite();
    bank.withdrawl();
    bank.display();

    return 0;
}
