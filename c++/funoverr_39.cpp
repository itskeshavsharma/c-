#include<iostream>
using namespace std;

class Animal{
    public:
    void sound(){
        cout<<"Animal sounds"<<endl;
    }
};
class Dogs: public Animal{
    public:
    void sound(){
        cout<<"Dog barks"<<endl;

    }
};

class cat: public Animal{
    public:
    void sound(){
        cout<<"Cats meow"<<endl;
    }
};

int main(){
    Animal obj1;
    obj1.sound();
    cout<<endl;
    Dogs obj2;
    obj2.sound();
    cout<<endl;
    cat obj3;
    obj3.sound();
    cout<<endl;   
}