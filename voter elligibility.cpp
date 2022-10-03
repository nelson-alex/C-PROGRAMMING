//program to verify voter elligibility
#include <iostream>
using namespace std;
int main()
{
int age;
cout<<"enter age";
cin>>age;
if(age>=18)
{
cout<<" You are elligible to vote";
}
else  
{
cout<<" You are not elligible to vote!";
}
    return 0;
}