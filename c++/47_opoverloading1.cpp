#include<iostream>
using namespace std;

class complexno{
    private:
    int real;
    int imag;
    public:
    complexno(){
        real=0;
        imag=0;
    }
    complexno(int r,int i){
        real=r;
        imag=i;
    }
    void printcomplex(){
    cout<<real<<"+"<<imag<<"i"<<endl;
    }
    
    complexno operator +(complexno c1){
        complexno temp;
        temp.real=real+c1.real;
        temp.imag=imag+c1.imag;
        return temp;
    }
    };
int main(){
    complexno obj1(5,5);
    complexno obj2(3,6);
    complexno obj3;
    obj3=obj1+obj2;
    obj3.printcomplex();
}
