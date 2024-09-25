#include<iostream>
using namespace std;
void dis(string,int);
main()
{
int pur;
string day;
cout<<"Enter the day: ";
cin>> day;
cout<<"Enter the payable amount:$ ";
cin>> pur;
dis(day,pur);

}
void dis(string day,int pur){
int total;
if(day == "sunday")
{
total = pur - (pur / 10);
cout<<"the total is "<<total;
}
if(day == "Sunday")
{
total = pur - (pur / 10);
cout<<"the total is "<<total;
}
if(day !="sunday")
{
cout<<"the payable amount is $"<<pur;
}
}