// *Program 1 Create an array of structures and accept input and display output
// structure name - person
// datamember - name, age, salary.

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
int i;
Person p[2];

for(i = 0; i<2;i++){

cout<<"Enter the details of the "<< (i+1) <<" person like name , age , salary "<<endl;
cout<<"Person name:"<<endl;
cin.ignore();                                  //The cin.ignore() function is used to skip (ignore)  
getline(cin, p[i].name);                      // unwanted characters in the input buffer,
cout<<"Enter person age :"<<endl;            //especially when switching between cin and getline.
cin>>p[i].age;
cout<<"Enter salary :"<<endl;
cin>>p[i].salary;
cout<<endl;
}

for (int i = 0; i < 2; i++)
{
cout<<"The details of the "<< (i+1) <<" person like name , age , salary "<<endl;
cout<<"Person name:"<<endl;
cout<<p[i].name<<endl;
cout<<"Enter person age :"<<endl;
cout<<p[i].age<<endl;
cout<<"Enter salary :"<<endl;
cout<<p[i].salary<<endl; 
cout<<endl;
}
return 0;
}