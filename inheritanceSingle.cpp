#include <iostream>
using namespace std;

// super class/ parent class/ base class
class Person{
public: 
string name;
int age;

// Person(){
//     cout<<"Iam constructor from person class\n";
// }

Person (string name, int age){
 this->name = name;
 this->age = age;
}

~Person(){
        cout<<"Iam destructor from person class\n";

}

};

// derived class / child class / sub class
class student : public Person{
 public:
 int roll_no;

//    student(){
//     cout<<"Iam constructor from student class\n";
//    }

    student(string name, int age,int roll_no) : Person (name,age){
        this->roll_no = roll_no;
   }
   

 void getInfo(){
    cout<<"Name = "<<name<<endl;
    cout<<"Age = "<<age<<endl;
    cout<<"Roll No = "<<roll_no<<endl;

 }
 ~student(){
            cout<<"Iam destructor from student class\n";

 }

};


int main(){

 student s1("chhavi sharma",20,52);
 s1.getInfo();

}
