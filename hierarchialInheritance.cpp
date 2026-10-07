#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int roll_no;
};

class Teacher : public student{
  public: 
  string subject;
  double salary;

  void getInfo()
{
 cout<<"  DETAILS  "<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Roll no: "<<roll_no<<endl;
    cout<<"Subject: "<<subject<<endl;
    cout<<"Salary: "<<salary<<endl;

}
};

class AssistantTeacher : public student {
public: 
    string Organization;

void getInfo()
{
 cout<<"  DETAILS  "<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Roll no: "<<roll_no<<endl;
    cout<<"Organization:  "<<Organization<<endl;

}

};

int main(){

    AssistantTeacher a1;
    a1.name="Chhavi Sharma";
    a1.roll_no=52;
    a1.Organization="CDGI";
    a1.getInfo();
    cout<<"Child 1 is called\n";
    cout<<endl;


    Teacher t1;
    t1.name="Ujjwal";
    t1.subject = "English";
    t1.salary=20000;
    t1.getInfo();
    cout<<"Child 2 is called\n";


}