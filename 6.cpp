#include<iostream>
using namespace std;
void status(int);
main()
{
int marks;
cout<<"Enter your marks: ";
cin>> marks;
status(marks);

}
void status(int marks){

if(marks>=50)
{
cout<<"You have passed";
}
if(marks<50)
{
cout<<"You have failed";
}
}