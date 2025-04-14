#include <iostream>
#include <string.h>

using namespace std;

class bank
{
    char name[20];
    double account_number;
    int current_balance;

public:
    bank()
    {
        strcpy(name, "");
        account_number = 0;
        current_balance = 0;
    }

    bank(char n[20], double accnum, float balance)
    {
        strcpy(name, n);
        account_number = accnum;
        current_balance = balance;
    }

    void diposite()
    {
        int amount;

        cout << "Enter amount of money to deposit: ";
        cin >> amount;

        current_balance = current_balance + amount;

        cout << "Your amount has been successfully deposited." << endl;
        cout << "Your current balance: " << current_balance << endl;
    }

    void withdraw()
    {
        int amount;

        cout << "Enter amount of money to withdraw: ";
        cin >> amount;

        current_balance = current_balance - amount;

        cout << "Your amount has been successfully withdraw." << endl;
        cout << "Your current balance: " << current_balance << endl;
    }

    void details()
    {
        cout << "Name : " << name << endl;
        cout << "Account number : " << account_number << endl;
        cout << "Current Balance : " << current_balance << endl;
    }
    int check(double accnum)
    {
        for (int i = 0; i < 100; i++)
        {
            if (account_number == accnum)
            {
                return 1;
            }
        }
        cout << "This account number is not exist.";
    }
} account[100];

int main()
{
    int a;
    char n[20];
    double accnum, acc;
    float balance;
    int count = 0;

A:
    cout << "Enter 1 for creating Account." << endl;
    cout << "Enter 2 for depositing money." << endl;
    cout << "Enter 3 for withdrawing money." << endl;
    cout << "Enter 4 for showing your bank details." << endl;
    cout << "Enter 0 to exit"<<endl;
    cout << "Enter your choice: ";
    cin >> a;
    switch (a)
    {
        case 1:
        {

            cout << "Enter your name: ";
            cin >> n;
            cout << "Enter your account number: ";
            cin >> accnum;
            cout << "Enter initial balance: ";
            cin >> balance;
            account[count] = bank(n, accnum, balance);
            count++;
            goto A;
        }

        case 2:
        {
            cout << "Enter your account number: ";
            cin >> acc;
            for (int i = 0; i < count; i++)
            {
                if (account[i].check(acc) == 1)
                {
                    account[i].diposite();
                    break;
                }
            }
            goto A;
        }

        case 3:
        {
            cout << "Enter your account number: ";
            cin >> acc;
            for (int i = 0; i < count; i++)
            {
                if (account[i].check(acc) == 1)
                {
                    account[i].withdraw();
                    break;
                }
            }
            goto A;
        }

        case 4:
        {
            cout << "Enter your account number: ";
            cin >> acc;
            for (int i = 0; i < count; i++)
            {
                if (account[i].check(acc) == 1)
                {
                    account[i].details();
                    break;
                }
            }
        }

        case 0:
        {
            return 0;
        }
    }
}
