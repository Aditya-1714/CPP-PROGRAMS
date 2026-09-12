#include <iostream>
using namespace std;
class BankAccount
{
private:
    string name;
    int accountNumber;
    string accountType;
    float balance;

public:
    void assignValues(string n, int accNo, string type, float bal)
    {
        name = n;
        accountNumber = accNo;
        accountType = type;
        balance = bal;
    }

    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount deposited successfully.\n";
    }

    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully.\n";
        }
        else
        {
            cout << "Insufficient balance.\n";
        }
    }

    void display()
    {
        cout << "\nName: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main()
{
    BankAccount account;
    account.assignValues("Aditya", 12345, "Saving", 10000);
    account.display();
    account.deposit(5000);
    account.display();
    account.withdraw(3000);
    account.display();
    account.withdraw(15000);
    return 0;
}

