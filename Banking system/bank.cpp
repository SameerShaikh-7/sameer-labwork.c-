#include <iostream>
#include <string.h>
using namespace std;

class Account
{
protected:
    int accNo;
    char holderName[50];
    float balance;
    double amount;

public:
    void openAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accNo;

        fflush(stdin);
        cout << "Enter Account Name: ";
        cin >> ws;               
        gets(holderName);

        cout << "Enter Balance: ";
        cin >> balance;

    
    }

    void deposit()
    {
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Deposit sucessful"<<endl ;
        cout << "Balance: "<< balance << endl;
    }

    void withdraw()
    {
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > balance)
        {
            cout << "Not enough balance" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal successful" << endl;
            cout << "Balance: "<< balance << endl;
        }
    }

    void showBalance()
    {
        cout << "Balance: " << balance << endl;
    }

    void showAccount()
    {
        cout << endl <<"--- Account Details ---" << endl;
        cout << "Account Number: " << accNo << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

class Current : public Account
{
    float overdraftLimit;

public:
    void withdrawWithOD()
    {
        overdraftLimit = 6000;

        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > balance + overdraftLimit)
        {
            cout << "overdraft limit close" << endl;
        }
        else
        {
            double usedOD = 0;
            if (amount > balance)
                usedOD = amount - balance;

            balance -= amount;

            cout << "Withdrawal successful." << endl;
            cout << "Balance: " << balance << endl;

            if (usedOD > 0)
                cout << "Overdraft : " << usedOD << endl;
        }
    }

    void menu()
    {
        int option;
        do
        {
            cout << endl;
            cout << "==== Main Menu ====" << endl;
            cout << "1. Check Balance" << endl;
            cout << "2. Deposit" << endl;
            cout << "3. Withdraw" << endl;
            cout << "4. Account Info" << endl;
            cout << "0. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> option;

            switch (option)
            {
            case 1:
                showBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdrawWithOD();
                break;
            case 4:
                showAccount();
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
            }

        } while (option != 0);
    }
};


