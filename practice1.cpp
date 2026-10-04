#include <iostream>
using namespace std;

class teacher{

  public:
   int teacher_id;
  string teacher_name;
  string teacher_subject;
  double teacher_salary;


 teacher(){
    cout<<"constructor is called beta";
    
 }

 void setValues (){
    cout<<"\nGive Teacher id:";
    cin>>teacher_id;
    cout<<"\nGive Teacher Name:";
    cin>>teacher_name;
    cout<<"\nGive Teacher subject:";
    cin>>teacher_subject;
    cout<<"\nGive Teacher Salary:";
    cin>>teacher_salary;
 }

 void   getValues(){
       cout<<"                       Details                              "<<endl;
        cout<<"\nTeacher id: "<<teacher_id;
        cout<<"\nTeacher Name: "<<teacher_name;
        cout<<"\nSubject: "<<teacher_subject;
        cout<<"\nSalary: "<<teacher_salary;

 }

};


int main (){

teacher t1;
teacher t2;
t1.setValues();
t2.setValues();
t2.getValues();



}