#include<iostream>
using namespace std;

class shape{
    public:
    virtual void Area()=0;
};

class circle: public shape {
    public:
    void Area(){
        cout<<"Enter the radius of circle : "<<endl;
        int r;
        cin>>r;
        cout<<"Area :  "<<3.14*r*r<<endl;
    }
};

class ractangle: public shape {
    public:
    void Area(){
        cout<<"Enter the length of reactangle : "<<endl;
        int l;
        cin>>l;
        cout<<"Enter the breadth of rectangle : "<<endl;
        int b;
        cin>>b;
        cout<<"Area :  "<<l*b<<endl;
    }
};

int main(){
    circle obj1;
    obj1.Area();
    ractangle obj2;
    obj2.Area();
    return 0;
}
