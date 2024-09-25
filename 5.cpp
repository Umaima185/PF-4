#include<iostream>
using namespace std;
void egbl(int);
main()
{
int age;
cout<<"Enter your age: ";
cin>> age;
egbl(age);

}
void egbl(int age){

if(age>=18)
{
cout<<"You can vote";
}
if(age<18)
{
cout<<"You are not eligible to vote";
}
}