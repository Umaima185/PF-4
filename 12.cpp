#include<iostream>
using namespace std;
void dis(string,int);
main()
{
int pur, i = 0;
string day;
while(i == 0)
{
cout<<endl<<"Enter the day: ";
cin>> day;
cout<<"Enter the payable amount:$ ";
cin>> pur;
dis(day,pur);

}


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
total = pur - (pur / 20);
cout<<"the payable amount is $"<<total;
}
}