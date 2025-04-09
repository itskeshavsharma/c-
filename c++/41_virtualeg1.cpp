#include<iostream>
using namespace std;

class Base{
    public:
    virtual void show(){
        cout<<"Base class show function is called"<<endl;
    }
    virtual void print(){
        cout<<"Base class print function is called"<<endl;
    }
};

class derived: public Base{
      public:
    void show(){
        cout<<"Derived class show function is called"<<endl;
    }
    void print(){
        cout<<"Derived class print function is called"<<endl;
    }
};

int main(){
    Base *baseptr;
    derived obj1;
    baseptr=&obj1;
    baseptr->show();
    baseptr->print();
    return 0;
}
