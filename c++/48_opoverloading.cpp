#include<iostream>
using namespace std;

class weight{
    private:
    int kg;
    public:
    weight(){
        kg=0;
    }
    weight(int x){
        kg=x;
    }
    void printwt(){
        cout<<"Kg: "<<kg<<endl;
    }
    weight operator++(){
        weight temp;
        temp.kg=++kg;  // temp weight object have a data member "kg"
        return temp;
    }
     weight operator++(int){
        weight temp;
        temp.kg=kg++;
        return temp;
    }
     weight operator--(){
        weight temp;
        temp.kg=--kg;
        return temp;
    }
    weight operator--(int){
        weight temp;
        temp.kg=kg--;
        return temp;
    }
};
int main(){
    weight obj1,obj2;
    obj2=++obj1; // specially done when there is an assignmet with increment or decrement 
    // ++obj2;
    // obj2.printwt();
    obj2.printwt();
}
