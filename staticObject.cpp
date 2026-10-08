#include <iostream>
using namespace std;

class ABC{

public: 

ABC (){
    cout<<"constructor"<<endl;
}

~ ABC (){
    cout<<"destructor"<<endl;
}

};

int main (){
   if(true){
 static ABC abc1;
   } 
    cout<<"chhavi"<<endl;

}