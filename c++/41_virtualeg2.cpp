#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void Eat(){      
        cout<<"Animal eats generic food "<<endl;
    }
};

class Dogs: public Animal{
    public:
     void Eat(){
        cout<<"Dog eats dogs food "<<endl;

    }
};

class cats: public Animal{
    public:
     void Eat(){
        cout<<"Cats eats Cats food "<<endl;
    }
};

void funtion(Animal *pt){
 pt->Eat();
}

int main(){
    Animal *ptr;
    cats obj1;
    Dogs obj2;
    ptr=&obj1;
    funtion(ptr);    // working as ptr->Eat();
    ptr=&obj2;
    funtion(ptr);
    return 0;
}