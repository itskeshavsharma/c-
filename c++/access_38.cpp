#include<iostream>
using namespace std;

class Mybaseclass{
public:
    int x;
    Mybaseclass(){
        x=4;
        y=3;
        z=2;
    }
    void printprotecteddata(){
        cout<<"Y: "<<y<<endl;
    }

protected:
    int y;
private:
    int z;
};

class myderivedclass : public Mybaseclass{
public:
    void printY() {
        // Accessing the protected member 'y' directly in derived class
        cout << "Accessing Y from derived class: " << y << endl;
    }
};

void outsidefunction(Mybaseclass obj){
    cout<<"X: "<<obj.x<<endl;
    obj.printprotecteddata();
    // cout<<"Y: "<<obj.y<<endl;  // Not accessible directly
    // cout<<"Z: "<<obj.z<<endl;  // Not accessible directly
}

int main(){
    // Mybaseclass obj1;
    // outsidefunction(obj1);
    
    myderivedclass obj2;
    cout<<"X : "<<obj2.x<<endl;
    obj2.printY();  // Access protected member 'y' from derived class

    return 0;
}
