#include <iostream>
using namespace std;

class Parent {
public:

void show(){
    cout<<"parent class"<<endl;
}

};


class Child : public Parent{
public:

void show(){
    cout<<"child class"<<endl;
}

};

int main(){

 Parent p1;
 p1.show();
 Child c1;
 c1.show();

}