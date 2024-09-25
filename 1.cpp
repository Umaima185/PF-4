#include<iostream>
using namespace std;
void cal(float);
main()
{
int a;
cout<<"Enter distance to travel: ";
cin>> a;

cal(a);

}

void cal(float a)
{
float fuel;
fuel = 10 * a;
cout<<"Fuel required is: "<<fuel;

}