#include <iostream>
using namespace std;
int main(){
    
    string name ="adam savage";
    cout<<name<<endl ;
    cout<<name.length()<<endl ;
    cout<<name[0]<<endl ;
    name[1]='k';
    cout<<name<<endl;
    cout<<name.find("age",0)<<endl;
    string lastName = name.substr(5,6);
    cout<<lastName<<endl;



    return 0;
}