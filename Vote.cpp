//program to find eligibility of voting
#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter your age:";
    cin>>age;
    
   if (age >18)
{
cout<< "you're eligible to vote";
}
else 
{
cout<<"you're not eligible to vote";
}
return 0;
}
