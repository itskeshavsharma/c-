#include<iostream>
#include<fstream>

using namespace std;

int main(){
   char arr[100];
   cout<<"Enter your name and age"<<endl;
   cin.getline(arr,100);
//    fstream;                                           // If we take fstream file then we have to put fstream myfile("wxyz.txt",ios::out);
   ofstream myfile("yz.txt");                       // write mode which is an output fstream
   myfile<<arr<<endl;
   myfile.close();
   cout<<"File write operation successfully executed"<<endl;


   cout<<"Read mode starts :  "<<endl;
   char arr1[100];
   ifstream obj("yz.txt");                                     // read mode which is an inpt fstream
   obj.getline(arr1,100);
//    cout<<arr1<<endl;
     while (obj.getline(arr1, 100)) {
        cout << arr1 << endl;  // Print each line from the file
    }
   obj.close();
   cout<<"File read operation successfully executed"<<endl;

//    ofstream myfile("wxyz.txt",ios::app);                     // append mode which is an output fstream
//    myfile<<arr<<endl;
//    myfile.close();
//    cout<<"File write operation successfully executed"<<endl;

//    cout<<"Read mode starts :  "<<endl;
//    char arr1[100];
//    ifstream obj("wxyz.txt");                          // read mode which is an inpt fstream
//    obj.getline(arr1,100);
//    cout<<arr1<<endl;
//    cout<<"File read operation successfully executed"<<endl;
}