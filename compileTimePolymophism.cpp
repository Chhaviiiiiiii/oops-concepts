#include <iostream>
using namespace std;

// constuctor overloading - example of compile time polymorphism in which according the input the object behaves accordingly 



class student{
 public:
 string name;

 student(){
    cout<<"non - parameterised constructor"<<endl;
 }

 
 student(string name){
    this->name = name;
    cout<<"parameterised constructor"<<endl;
 }

};

int main(){
    student s1("chhavi");
}