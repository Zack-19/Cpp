#include <iostream>
#include <cmath>
using namespace std;

class Student
{
private:
    /* data */
public:
    string name;
    string major;
    double gpa;
    Student(string argN,string argM,double argG){
        name = argN;
        major = argM;
        gpa = argG;
    }
    //other constructor
    Student(){
        name = "no name";
        major = "no major";
        gpa = 0;
    } 
    bool hasHonors(){
        if(gpa>=3){
            return true;
        }else {
            return false;
        }
    }
};



int main(){
    
    Student student1("jul","art",3.1);
    Student student2("oli","math",2.9);
    cout<<student1.hasHonors()<<endl;
    return 0;
}
