#include <iostream>
using namespace std;

class person {

    public:
    string name;
    int age;

};

class student : public person{
public: 
int roll_no;

};

class graduate : public student{

    public:
string course;
string specification;

getInfo(){
    cout<<"  DETAILS  "<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Roll no: "<<roll_no<<endl;
    cout<<"Course: "<<course<<endl;
    cout<<"Specification: "<<specification<<endl;
}

};

int main(){

graduate g1;
g1.name="Chhavi Sharma";
g1.age=20;
g1.roll_no=52;
g1.course="BTech";
g1.specification="Computer Science";

g1.getInfo();


}