#include<iostream>
using namespace std;
void status(int);
main()
{
int n;
cout<<"Enter distance to be covered: ";
cin>> n;
status(n);

}
void status(int n){
int fuel;
fuel = n * 10;
if(fuel>=100)
{
cout<<"Fuel needed: "<<fuel<<endl;
cout<<"No need to refill for now";
}
if(fuel<100)
{
cout<<"fuel required: "<<fuel<<endl;
cout<<"Fill up your tank upto 100 litres";
}
}