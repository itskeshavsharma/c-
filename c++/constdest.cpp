#include<iostream>
using namespace std;
class cars {
private:
    string name;
    int price;
    int milage;

public:
// Default constructor
cars(){
    name="BMW";
    price= 1000000;
    milage=1500;
}
// Parameterized constructor
cars(string n,int p,int m){
    name=n;
    price= p;
    milage=m;
}
// Copy constructor
cars(cars &obj){                  //Reference to the Object is passed
    name=obj.name;
    price= obj.price;
    milage=obj.milage;
}
    void setdata(string n, int p, int m) {
        name = n;
        price = p;
        milage = m;
    }
    void printdata() {
        cout << "Name : " << name << endl;
        cout << "Price : " << price << endl;
        cout << "Milage : " << milage << endl<<endl;
    }

    ~cars(){
        cout<<"Destructor is called"<<endl;
    }
};

int main() {
    cars car1;                           // Default constructor
    car1.setdata("Toyota",100,7); 
    car1.printdata();
    cars car2("Tesla",120000,150);      // Parameterized constructor
    car2.printdata();
    cars car3=car2;
    car2.printdata();                  // Copy constructor

    return 0;
}
