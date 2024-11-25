#include<iostream>
using namespace std;
int sum(int a,int b,int c=9)   // In default parameter the rightmost value has to be default 
{
    return a+b+c;
};

int main(){


int first;
int second;

cout<<"Enter the 1st number:"<<endl;
cin>>first;
cout<<"Enter the 2nd number:"<<endl;
cin>>second;

cout<<"Sum is :"<<sum(first,second);

}