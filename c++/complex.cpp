#include<iostream>
using namespace std;
class complexno{
    private:
    int real;
    float imaginary;
    public:
    complexno(){  
    }
    complexno(int r, float i){
    real = r;
    imaginary = i; 
    }
    void displaydata(){
        cout<<"Imaginary number is : "<< real <<"+"<< imaginary<<"i"<<endl;
    }
    int getrealpart(){
        return real;
    }
    int getimaginarypart(){
        return imaginary;
    }
};

complexno addnumber(complexno n1, complexno n2){
    int r;
    float i;
    r =n1.getrealpart() + n2.getrealpart();
    i = n1.getimaginarypart() + n2.getimaginarypart();
    complexno temp(r,i);
    return temp;
}
int main(){
    complexno comp1(23,3),comp2(13,5),comp3;
    comp1.displaydata();
    comp2.displaydata();
    comp3=  addnumber(comp1,comp2);
    comp3.displaydata();
}