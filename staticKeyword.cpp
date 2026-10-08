#include <iostream>
using namespace std;

void fun (){
    static int x =0; // reinitialization nhi hoga kabhi bhi 
    cout<<"x = "<<x<<endl;
    x++;
}

int main (){

 fun();
  fun();
 fun();


}