#include<iostream>
using namespace std;
class BaseA{
    public:
 void print(){
    cout<<"Base A"<<endl;
}
};
class BaseB{
    public:
 void print(){
    cout<<"Base B"<<endl;
}
};

class Derived :BaseA,BaseB{
    public:
 //print()->class BaseA
 //print()->class BaseB
  void print(){
    // BaseA::print();
    BaseB::print();
}
};

int main(){
    Derived obj1;
    obj1.print();
    return 0;
}
