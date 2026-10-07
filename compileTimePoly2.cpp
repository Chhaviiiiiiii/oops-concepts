#include <iostream>
using namespace std;

// function overloading - example of compile time polymorphism in which according the input the object behaves accordingly 



class student{
 public:
 string name;

 void dataInfo(){
    cout<<"non - parameterised function"<<endl;
 }

 
 void dataInfo(string name){
    this->name = name;
    cout<<"parameterised function"<<endl;
 }

};

int main(){
    student s1;
    s1.dataInfo("chhavi");
}