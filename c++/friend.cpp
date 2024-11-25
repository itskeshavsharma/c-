#include<iostream>
using namespace std;

class Distance{
private: int meters;
public:
Distance(){
meters=0;
}
void display()
{
    cout<<"Meters:"<<meters<<endl;
}
friend void addvalue(Distance &d); // prototype or signature
};
void addvalue(Distance &d){
    d.meters = d.meters + 5;
}
int main(){
    Distance obj;//meters=0
    obj.display();//0
    // the friend function call
    addvalue(obj); // pass by reference
    obj.display();

}