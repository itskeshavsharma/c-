#include<iostream>
using namespace std;

template <typename T,typename U>
class weight{
    private:
    T kg;
    U grams;
    public:
    void setdata(T x,U y){
        kg = x;
        grams=y;
    }
    T kgdata(){
        return kg;
        
    }
    U gramsdata(){
        return grams;
    }
};
int main(){
    weight <int,double>obj1;
    obj1.setdata(4,5.76555);
    cout<<obj1.kgdata()<<endl;
    cout<<obj1.gramsdata();
    return 0;
}