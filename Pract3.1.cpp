#include <iostream>
#include <vector>
#include<cstring>
using namespace std;

class employee
{
    char name[10];
    int salary;
    int bonus;
public :
    employee(char n[10],int s,int b=0)
    {
        strcpy(name,n);
        salary = s;
        bonus = b;
    }
    void displaydetails()
    {
       cout<<name<<endl;
       cout<<salary<<endl;
       cout<<bonus<<endl;
    }
};

int main()
{
    vector<employee> emp;
    int n;
    char name[10];
    double salary, bonus;

    cout << "Enter the number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter name, basic salary, and bonus (or -1 for default bonus): ";
        cin >> name >> salary >> bonus;

        if (bonus == -1)
        {
            emp.push_back(employee(name, salary));
        }
        else
        {
           emp.push_back(employee(name, salary,bonus));
        }
    }
    cout << "\nEmployee Salary Details:\n";

    for (auto& i : emp)
    {
        i.displaydetails();
    }

    return 0;
}
