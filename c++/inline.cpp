#include<iostream>
using namespace std;
inline int greatest(int a,int b)
{
    if (a>b)
    {
       return a;
    }

    else{
    return b;
    }
};

int main(){


int first;
int second;

cout<<"Enter the 1st number:"<<endl;
cin>>first;
cout<<"Enter the 2nd number:"<<endl;
cin>>second;

cout<<"greatest number is :"<<greatest(first,second);

}