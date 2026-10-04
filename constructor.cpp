#include <iostream>
using namespace std;

class account{

private:
double balance;

public:
 int acc_no;
 string acc_holdername;

// default constructor
 account(){
    cout<<"Non Parameterised constructor/Default Constructor is called \n";
 }

// parameterised constructor
account(int ano, string name, double b){
    acc_no = ano;
    acc_holdername = name;
    balance = b;
}


// copy constructor
account(int acc_no, string acc_holdername){
    this->acc_no = acc_no;
    this->acc_holdername = acc_holdername;
}

void showDetails(){
    cout<<"\nAccount Number: "<<acc_no;
    cout<<"\nAccount Holder Name: "<<acc_holdername;
    cout<<"\nBalance: "<<balance;

}


};

int main(){

account a1;
cout<<endl;
account a2(1,"chhavi",20000);
a2.showDetails();
cout<<endl;
account a3(2,"Krishna");
a3.showDetails();


}