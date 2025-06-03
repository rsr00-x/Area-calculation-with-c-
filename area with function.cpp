#include <iostream>
using namespace std;


    //declaration of functions.
    void Operations (char op);
    double Circle ();
    double Rectangle();
    double Triangle();
    double Square();
    void showResults(double area);


int main () //main function; all execution will happen according to this function.
{
    char op=' ' ;
    //double area;

    //for showing menu.
    cout<<"Menu of Areas: "<<endl<<endl;
    cout<<"A. Circle."<<endl;
    cout<<"B. Rectangle."<<endl;
    cout<<"C. Triangle."<<endl;
    cout<<"D. Square."<<endl<<endl;
    cout<<"Press '.' for exiting program."<<endl<<endl;//for exiting the program.

    while (op!='.')
    {
    cout<<"Enter your choice: ";
    cin>>op;

    if(op=='.')//for exiting the program
    {
        cout<<"Done."<<endl;
        break;
    }

    Operations (op);//function call to perform the calculation.
    }

}

void Operations (char op)
{
    double area;

    switch (op)
    {
    case 'A':
        area = Circle();
        showResults(area);
        break;

    case 'B':
        area = Rectangle();
        showResults(area);
        break;

    case 'C':
        area = Triangle();
        showResults(area);
        break;

    case 'D':
        area = Square();
        showResults(area);
        break;

    default:
        cout<<"Invalid Choice."<<endl<<endl;

    }


}

double Circle ()//for calculating the area of circle.
{
    double r, area=1;

    cout<<"Enter the radius of a circle: ";
    cin>>r;

    area*=(3.1416*r*r);

    return area;

}

double Rectangle ()//for calculating the area of rectangle.
{
    double l, w, area=1;

    cout<<"Enter the length of a Rectangle: ";
    cin>>l;
    cout<<"Enter the width of a Rectangle: ";
    cin>>w;

    area*=l*w;

    return area;

}

double Triangle ()//for calculating the area of triangle.
{
    double b, h, area=1;

    cout<<"Enter the base of a Triangle: ";
    cin>>b;
    cout<<"Enter the height of a Triangle: ";
    cin>>h;

    area*=0.5*b*h;

    return area;
}

double Square ()//for calculating the area of square.
{
    double a, area=1;

    cout<<"Enter the side of a Square: ";
    cin>>a;

    area*=a*a;

    return area;
}

void showResults(double area)//for showing the result.
{
    cout<<"The area is: "<<area<<endl<<endl;
}
