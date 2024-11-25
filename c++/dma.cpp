#include<iostream>
using namespace std;

int main(){

 int size;
 int *ptr;

 cout<<"Enter the size of array: "<<endl;
 cin>>size;

 ptr = new int[size];

 cout<<"Enter the values"<<endl;
 for(int i =0;i<size;i++){
    cin>>ptr[i];

 }  

  cout<<"The values are"<<endl;
 for(int i =0;i<size;i++){
    cout<<ptr[i]<<"\n";

 } 
}