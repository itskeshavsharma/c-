#include<iostream>
using namespace std;

int main(){

    int num,den,result;
    cout<<"Enter the numerator :"<<endl;
    cin>>num;
    cout<<"Enter the denominator :"<<endl; 
    cin>>den;
    try
    {
        if (den==0)
        {
         throw den;
        }
        
     result=num/den;
     cout<<"The result is : "<<result<<endl;
    }
    catch(int ex){
        cout<<"Divide by 0 is not allowed. "<<endl;
    }
}