#include<iostream>
using namespace std;

class Myclass {
public:
    int x;
    static int count;
    Myclass(){
        count++;
    }

    static int get(){
        return count;
    }
};
int Myclass::count=0;   // Initialisation 

int main(){
    cout<<Myclass::get();
    Myclass obj1,obj2;
    cout<<"Count : "<<Myclass::count;
}
