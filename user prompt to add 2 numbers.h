//program to prompt user to enter number
#include<iostream>
using namespace std;
int main(){
    int i,n,m,sum=0;
    cout<<"Enter the starting point"<<endl;
    cin>>n;
    cout<<"Enter the ending point"<<endl;
    cin>>m;
    for(i=n;i<=m;i++){
       cout<< i <<endl;}
       sum+=i;
    {
    cout<<"The sum of the numbers " << n <<  " and " << m <<  " is " <<sum;
}
    return 0;
    }