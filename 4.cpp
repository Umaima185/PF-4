#include<iostream>
using namespace std;
void add(int,int);
void sub(int,int);
void mul(int,int);
void divide(int,int);


main()
{
int a,b;
char op;
cout<<"Enter integer: ";
cin>> a;
cout<<"Enter 2nd integer: ";
cin>> b;
cout<<"Enter operator(+, -, *, /): ";
cin>> op;
if(op == '+')
{
add(a,b);
}
if(op == '-')
{
sub(a,b);
}
if(op == '*')
{
mul(a,b);
}
if(op == '/')
{
divide(a,b);
}

}

void add(int a,int b)
{
int sum;
sum = a + b;
cout<<"Sum is: "<<sum;
}
void sub(int a,int b)
{
int minus;
minus = a - b;
cout<<"Answer is: "<<minus;
}
void mul(int a,int b)
{
int p;
p = a * b;
cout<<"Product is: "<<p;
}
void divide(int a,int b)
{
int q;
q = a / b;
cout<<"Quotient is: "<<q;
}