#include <iostream>
using namespace std;

class Shape{

virtual void draw () =0; //pure vitual function

};

class Circle : public Shape{

    public:
void draw (){
    cout<<"it is the circle"<<endl;
}

};

int main(){

Circle c1;
c1.draw();
}