#include<iostream>
using namespace std;
void cal(float);
main()
{
int inches;
cout<<"Enter inches: ";
cin>> inches;

cal(inches);

}

void cal(float inches)
{
float feet;
feet = inches/12;
cout<<"Inches in feet is: "<<feet;

}