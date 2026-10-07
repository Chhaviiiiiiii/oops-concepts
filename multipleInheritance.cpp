#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int roll_no;
};

class Teacher{
  public: 
  string subject;
  double salary;
};

class AssistantTeacher : public Teacher, public student {
public: 

void getInfo()
{
 cout<<"  DETAILS  "<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Roll no: "<<roll_no<<endl;
    cout<<"Subject: "<<subject<<endl;
    cout<<"Salary: "<<salary<<endl;

}

};

int main(){

    AssistantTeacher a1;
    a1.name="Chhavi Sharma";
    a1.roll_no=52;
    a1.subject="OOPs";
    a1.salary=20000;

    a1.getInfo();

}