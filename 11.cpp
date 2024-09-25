#include<iostream>
using namespace std;
void nama(string);
main()
{
string name;
cout<<"enter your name: ";
cin>> name;
nama(name);
}
void nama(string name)
{
while(name != "n")
{
cout<< name<<endl;
}
}