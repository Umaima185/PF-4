#include<iostream>
using namespace std;
void status(int);
main()
{
int n;
cout<<"Enter a number: ";
cin>> n;
status(n);

}
void status(int n){

if(n%2==0)
{
cout<<"the number "<<n<<" is even";
}
if(n%2==1)
{
cout<<"the number "<<n<<" is odd";
}
}