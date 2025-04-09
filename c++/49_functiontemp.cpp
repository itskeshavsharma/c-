#include<iostream>
using namespace std;

template <typename t,typename u>
u add(t x,u y){
    return x+y;
}

int main(){
    cout<<"Addition of two number is "<<add<float>(3,4.5)<<endl;
    cout<<"Addition of two number is "<<add<int>(3,4);
}