#include <iostream>
using namespace std;

class fun
{
    public: 
   static  int x; // reinitialization nhi hoga kabhi bhi 
    
     void inc(){
        cout<<"x: "<<x<<endl;
        x = x+1;

     }
};
int fun::x = 0;

int main (){
fun f1;

f1.x = 100;

fun f2;

f1.inc();
f1.inc();
f2.inc();
f2.inc();



}