/*#include<iostream>
#include<stack>
using namespace std;

class Point
{
    int x,y;
public:

    Point(int xcoord=0, int ycoord=0) : x(xcoord), y(ycoord) { }

    Point operator-()
    {
        return Point (-x,-y);
    }

    Point operator+(Point &p)
    {
        return Point(x+p.x, y+p.y);
    }

    Point operator==(Point &p)
    {
        return Point(x==p.x, y==p.y);
    }
    void display()
    {
        cout<<"Point is ("<<x<<","<<y<<")"<<endl;
    }
};

int main()
{
    stack<Point> operations;

    Point p1(2,-3),p2(3,5),p3;

    cout<<"Before any Operations performed: "<<endl;
    p1.display();
    p2.display();

    cout<<"After Negations: "<<endl;
    p3=-p1;
    p1.display();
    p3.display();

    return 0;
}*/


#include<iostream>
using namespace std;
class Cordinates
{       public:
        int x,y;
        void Get_cordinates()
        {
            cout<<"Enter x and y coordinates e.g(x y) : ";
            cin>>x>>y;
        }
        void operator+(Cordinates &c1)
        {
            Cordinates c;
            c.x=x+c1.x;
            c.y=y+c1.y;
            cout<<"X cordinates : "<<c.x<<endl;
            cout<<"Y cordinates : "<<c.y<<endl;
        }
        void operator-(Cordinates &c1)
        {
             Cordinates c;
            c.x=x-c1.x;
            c.y=y-c1.y;
            cout<<"X cordinates : "<<c.x<<endl;
            cout<<"Y cordinates : "<<c.y<<endl;;

        }
        void operator==(Cordinates &c1)
        {
           if(x==c1.x && y==c1.y)
                    cout<<"The cordinates are equal"<<endl;

            else
                 cout<<"The cordinates are not equal"<<endl;

        }
};
int main()
{

    Cordinates N1,N2;
    N1.Get_cordinates();
    N2.Get_cordinates();
    N1+N2;
    N1-N2;
    N1==N2;
    cout<<"24CE116_Kunj";
    return 0;
}
