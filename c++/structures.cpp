#include<iostream>
using namespace std;

struct person
{
    char name[100];
    int age;
    double salary;
};


int main(){


person p1;
cout<<"Enter the details of the person"<<endl;
cout<<"Person name:"<<endl;
cin.getline(p1.name,100);
cout<<"Enter person age :"<<endl;
cin>>p1.age;
cout<<"Enter salary :"<<endl;
cin>>p1.salary;

cout<<"Person details are : "<<endl;
cout<<"Person name:"<< p1.name<<endl;
cout<<"Person name:"<< p1.age<<endl;
cout<<"Person name:"<< p1.salary<<endl;   
}
