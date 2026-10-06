#include <iostream>
using namespace std;

class Student{

public:
 string name;
 double* cgpaptr;

  Student (string name, double cgpa){
  this->name = name;
  cgpaptr = new double;
  *cgpaptr = cgpa;
}
// custom copy constructor
  Student(Student &obj){
    this->name = obj.name;
    cgpaptr = new double;
     *cgpaptr = *obj.cgpaptr;
  }

  getInfo(){
    cout<<"Name = "<<name<<endl;
    cout<<"CGPA = "<< *cgpaptr<<endl;
  }



};



int main(){

Student s1("Sakshi Sharma",8.9);
Student s2(s1); // default copy constructor
s1.getInfo();
 *(s2.cgpaptr) =9.5;
 // here we have change the cgpa of s2 student but it is reflecting in the s1 student due to the same shallow copy of the address
s1.getInfo();
s2.getInfo();

} 