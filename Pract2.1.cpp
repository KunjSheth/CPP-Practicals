#include <iostream>
using namespace std;

class rectangle
{
    int length, width;

public:
    void setdimention();
    void display();
};

void rectangle ::setdimention()
{
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;
    cout << endl;
}

void rectangle ::display()
{
    int area, perimeter;
    cout << "area is " << length * width << endl;
    cout << "perimeter is " << 2 * (length + width) << endl
         << endl;
}

int main()
{
    rectangle r[5];
    int n;
A:
    cout << "enter 1 to set dimensions" << endl
         << "enter 2 to display area" << endl
         << "enter 3 to update data" << endl
         << "enter 4 to exit" << endl;
    cout << "enter input: ";
    cin >> n;
    cout << endl;
    switch (n)
    {
        case 1:
        {
            for (int i = 0; i < 5; i++)
            {
                cout << "rectangle " << i + 1 <<":"<< endl;
                r[i].setdimention();
            }
            goto A;
        }
        case 2:
        {
            for (int i = 0; i < 5; i++)
            {
                cout << "area and perimeter of rectangle " << i + 1 <<":" << endl;
                r[i].display();
            }
            goto A;
        }
        case 3:
        {
            int num;
            cout << "enter number of rectangle: ";
            cin >> num;
            r[num].setdimention();
            r[num].display();
            goto A;
        }
        case 4:
        {
            break;
        }
    }
    return 0;
}
