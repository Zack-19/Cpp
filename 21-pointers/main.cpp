#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int age =23;
    double gpa = 3.1;
    string name ="oli";

    cout<<"age memo address : "<<&age<<endl;

    int *pAge =&age;
    double *pGpa = &gpa;
    string *pName =&name;


    cout<<pAge<<endl;
    cout<<"dereferencing a pointer : "<<*pAge<<endl;
    cout<<*&age<<endl;

    return 0;
}
