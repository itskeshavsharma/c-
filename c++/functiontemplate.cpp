#include <iostream>
using namespace std;

// Generic template function
template <class T1>
void function(T1 a) {
    cout << "Inside function template, a = " << a << endl;
}

// Overloaded normal function
void function(int a) {
    cout << "Inside normal function, a = " << a << endl;
}

int main() {
    function(5);               // Calls the normal function
    function(5.4);             // Calls the template function
    function("hello");         // Calls the template function
    return 0;
}