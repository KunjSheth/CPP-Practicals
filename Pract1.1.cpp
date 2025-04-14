#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
    char account_holders_name[20];
    double account_no,balance,deposit_amount,withdraw_amount;

public:
    void InsertData()
    {
        cout<<"Account Holder's Name: ";
        cin>>account_holders_name;
        cout<<"Account No.: ";
        cin>>account_no;
        cout<<"Balance: ";
        cin>>balance;
    }
    void deposit()
    {
        cout<<"Enter Amount to Deposit in your account: ";
        cin>>deposit_amount;
        balance=balance+deposit_amount;
    }
    void withdraw()
    {
        if(balance>=2000)
        {
            cout<<"Enter Amount to Withdraw from your account: ";
            cin>>withdraw_amount;
            balance=balance-withdraw_amount;
        }
        else
        {
            cout<<"There is not Sufficient Balance to Withdraw Money."<<endl;
        }
    }
    void displayData()
    {
        cout<<"Your Current Balance is "<<balance<<endl<<endl;
    }
};

int main()
{
    class BankAccount b1,b2;

    b1.InsertData();
    b1.deposit();
    b1.withdraw();
    b1.displayData();

    b2.InsertData();
    b2.deposit();
    b2.withdraw();
    b2.displayData();

    return 0;
}
