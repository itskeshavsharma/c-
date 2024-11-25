#include<iostream>
using namespace std;

// void swap(int a, int b){   // call by value or pass by value
//     int t = a;
//     a=b;
//     b=t;
// }
// void swap(int &a, int &b){   // call by reference or pass by reference
//     int t = a;
//     a=b;
//     b=t;
// }
void swap(int *a, int *b){   // call by pointer or pass by pointer
    int t = *a;
    *a=*b;
    *b=t;
}
int main(){

int x=5;
int y=6;

cout<<"Before swapping: "<<"x = "<<x <<" y = "<<y<<endl;
swap(x,y);
cout<<"After swapping: "<<"x = "<<x <<" y = "<<y<<endl;


}