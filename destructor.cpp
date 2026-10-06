#include <iostream>
using namespace std;

class Student{

public:
 string name;
 double* cgpaptr;


  Student (string name, double cgpa){
        cout<<"Paremeterised constructor\n";

  this->name = name;
  cgpaptr = new double;
  *cgpaptr = cgpa;
}
  ~Student(){
 cout<<"Destructor called\n";
 delete cgpaptr;
  }


  getInfo(){
    cout<<"Name = "<<name<<endl;
    cout<<"CGPA = "<< *cgpaptr<<endl;
  }



};



int main(){

Student s1("Sakshi Sharma",8.9);
s1.getInfo();
} 