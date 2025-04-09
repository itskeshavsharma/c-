#include<iostream>
using namespace std;

int sum(int n){
    if (n!=0)
    {
        return (n+sum(n-1));
    }
    else 
    return n;
    
}


int main(){
    int total=sum(5);
    cout<<"Sum of first 5 natural number is "<<total;
}