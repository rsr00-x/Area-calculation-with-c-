#include<iostream>
using namespace std;
int main()
{
    int Rectangle, Circle, Square, Triangle;
    float Area, radius, base, height, length, width;
    cout<<"Enter your Shape: ";
    cin>>Rectangle, Circle, Square, Triangle;
    {

    if (Rectangle)
    {
        cout<<"Enter length and width";
        cin>>length,width;
        Area=(length*width);
    }
    else if (Circle)
    {
        cout<<"Enter radius";
        cin>>radius;
        Area=((22/7)*radius*radius);
    }
    else if (Square)
    {
        cout<<"Enter length";
        cin>>length;
        Area=(length*length);
    }
    else if (Triangle)
    {
        cout<<"Enter base and height";
        cin>>base,height;
        Area=((1/2)*base*height);
    }
    }
    return 0;
}
