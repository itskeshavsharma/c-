#include<iostream>
using namespace std;
class shape
{
    protected: 
    int width;
    int height;
    public:
    void  seth(int h){
        height = h;
        ;
    }
   void setw(int w){
         width = w;
        ;
    }
};
class rectangle : public shape{
    public:
    int getarea(){
        return width* height; 
    }
};

int main(){
    rectangle obj1;
    obj1.seth(4);
    obj1.setw(5);
    cout<<"Area : "<<obj1.getarea();
}