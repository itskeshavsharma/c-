#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Function 1: "<<endl;
    return a+b;
}

double sum(double a, double b){
    cout<<"Function 2: "<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Function 3: "<<endl;
    return a+b+c;
}

double sum(int a, double b){
    cout<<"Function 4: "<<endl;
    return a+b;
}

double sum(double a, int b){
    cout<<"Function 5: "<<endl;
    return a+b;
}


int main(){

cout<<"The sum is : "<<sum(4,5)<<endl;  // function 1
cout<<"The sum is : "<<sum(4.5,5.5)<<endl;// function 2
cout<<"The sum is : "<<sum(2,3,4)<<endl;// function 3
cout<<"The sum is : "<<sum(4,5.5)<<endl;// function 4
cout<<"The sum is : "<<sum(5.5,4)<<endl;// function 5


}
