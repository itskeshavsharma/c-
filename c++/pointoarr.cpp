/*Program 2 Create a variable of struct type. create a pointer and point to it and use the pointer to take
input and display output.*/


#include<iostream>
#include<string>
using namespace std;

struct Person{
    string name;
    int age;
    int salary;
};

int main()
{

Person p1;

Person *ptr=&p1;
cout<<"Enter the details of the person is : "<<endl;
cout<<"Person name:"<<endl;
getline(cin,ptr->name);                              
cout<<"Enter person age :"<<endl;            
cin>>ptr->age;
cout<<"Enter salary :"<<endl;
cin>>ptr->salary;
cout<<endl;

cout<<"The details of the person is : "<<endl;
cout<<"Person name:"<<endl;
cout<<ptr->name<<endl;                              
cout<<"Enter person age :"<<endl;            
cout<<ptr->age<<endl;;
cout<<"Enter salary :"<<endl;
cout<<ptr->salary<<endl;
cout<<endl;

return 0;
}
