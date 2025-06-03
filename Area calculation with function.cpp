#include<iostream>
using namespace std;

//functions declare
void operations(char op);
void Circle();
void Rectangle();
void Triangle();
void Square();
void showResults(double area);

int main()
{
    {char op=' ';
    //for the menu
    cout<<"         The Menu of Areas:     "<<endl;
    cout<<"A. Circle."<<endl;
    cout<<"B. Rectangle."<<endl;
    cout<<"C. Triangle."<<endl;
    cout<<"D. Square."<<endl<<endl;
    cout<<"Press 'N' to Exit."<<endl<<endl;//to exit the program.
    while (op!='N')
    {
    cout << "Enter your choice (A-D to calculate area, N to exit): ";
    cin >> op; //op for option choosing

    if(op=='N') //to exit the program
    {
        cout<<"The Calculation is Done."<<endl;
        break;
    }

    operations (op); //function call to perform the calculation.
    }


    }
    return 0;
}
// function for choice
void operations(char op) {
    switch (op) {
        case 'A':
            Circle();
            break;
        case 'B':
            Rectangle();
            break;
        case 'C':
            Triangle();
            break;
        case 'D':
            Square();
            break;

    default:
        cout<<"Invalid Choice. Try Again - "<<endl<<endl;
    }

}

// Function to calculate area of a circle
void Circle() {
    double r, area;
    cout<<"Enter the radius of a circle : ";
    cin>>r;
    area=(3.1416*r*r);
    showResults (area);
}
// Function to calculate area of a rectangle
void Rectangle() {
    double rec[2]; // Array to store length and width
    cout << "Enter the length and width of the rectangle: ";
    cin >> rec[0] >> rec[1];
    double area=rec[0]*rec[1];
    showResults (area);
}
// Function to calculate area of a triangle
void Triangle() {
    double tri[2]; // Array to store base and height
    cout << "Enter the base and height of the triangle: ";
    cin >> tri[0] >> tri[1];
    double area=0.5 * tri[0] * tri[1];
    showResults (area);
}
// Function to calculate area of a square.
void Square (){
    double a;
    cout<<"Enter the side of a Square: ";
    cin>>a;
    double area=a*a;
    showResults (area);
}
//for showing the result.
void showResults(double area){
    cout<<"The area is : "<<area<<endl<<endl;
}



