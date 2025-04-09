// #include<iostream>
// using namespace std;
// class Base{
//     protected:
//     int val;
// };

// class derivedA:public Base{
//     public:
//     int derived1(){
//      val=1;
//     }
//     void getval(){
//         cout<<"DerivedA value of data member is :"<<val;
//     }
// };
// class derivedB:public Base{
//     public:
//     int derived1(){
//      val=2;
//     }
//     void getval(){
//         cout<<"DerivedB value of data member is :"<<val;
//     }
// };

// class derivedC:public derivedB, public derivedA {
//     public:
//     void getval(){
//         cout<<"DerivedC value of data member is :";
//         derivedA::getval();
//         }
// };

// int main(){
//  derivedC obj1;
//  obj1.getval();   
// }
#include<iostream>
using namespace std;

class Base {
public:
    int val;
};

class derivedA :public Base {
public:
    void derived1() {
        val = 1;
    }
    void getval() {
        cout << "DerivedA value of data member is: " << val << endl;
    }
};

class derivedB :public Base {
public:
     int derived1() {
        val = 2;
    }
    void getval() {
        cout << "DerivedB value of data member is: " << val << endl;
    }
};

class derivedC :  public derivedA,public derivedB {
public:
    void getval() {
        cout << "Int value 1 is : ";
        derivedB::getval();  // Explicitly call getval() from derivedA
    }
};

int main() {
    derivedC obj1;
    obj1.derivedB::derived1(); // Set val to 1 using derivedA
    obj1.getval();  // Call the overridden getval() method in derivedC
    return 0;
}
