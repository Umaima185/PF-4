#include<iostream>
using namespace std;
void cal(int);
main()
{
int length;
cout<<"Enter side length of Rubik's cube: ";
cin>> length;

cal(length);

}

void cal(int length)
{
int stickers;
stickers = length * length * 6;
cout<<"Stickers needed is: "<<stickers;

}