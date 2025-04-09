#include<iostream>
#include<cstring>
using namespace std;

class strings{
    private:
    char str[100];
    public:
    strings(){
        str[0]='\0';
    }
    strings(const char* s){
        strcpy(str,s);
    }
    void printstring() const{
        cout<<str<<endl;

    }

    strings operator+(const strings& s){
        strings temp;
        strcat(temp.str,str);
        strcat(temp.str,s.str);
        return temp;
    }
    };
    
int main(){
    strings s1("Hello");
    strings s2("World");
    

    strings result=s1+s2;
    result.printstring();


    
}
