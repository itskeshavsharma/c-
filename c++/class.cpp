#include <iostream>  // For cout, cin
#include <string>    // For std::string 
using namespace std; // Optional; simplifies code by avoiding std::

class cars {
private:
    string name;
    int price;
    int milage;

public:
    void setdata(string n, int p, int m) {
        name = n;
        price = p;
        milage = m;
    }
    void printdata() {
        cout << "Name : " << name << endl;
        cout << "Price : " << price << endl;
        cout << "Milage : " << milage << endl;
    }
};

int main() {
    cars car1;
    car1.setdata("Tesla", 50000, 300);
    car1.printdata();

    return 0;
}
