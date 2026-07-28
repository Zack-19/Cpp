#include <iostream>
#include <cmath>
using namespace std;


void sayHi (string name, int age){
    cout<<"hello "<<name<<" your age is "<<age<<endl;
}
void sayHi2 (string name, int age);
int main(){
    sayHi("loman",20);
    sayHi2("jera",21);
    sayHi("tike",18);

    return 0;
}


void sayHi2 (string name, int age){
    cout<<"hello user "<<name<<" your age is "<<age<<endl;
}