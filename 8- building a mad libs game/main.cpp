#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    string color,pluralNoun,person;
    cout<< "enter a color : ";
    getline(cin,color);
    cout<< "enter a plural noun : ";
    getline(cin,pluralNoun);
    cout<< "enter a person : ";
    getline(cin,person);

    cout<<"roses are "<<color<<endl;
    cout<<pluralNoun <<" are blue"<<endl;
    cout<<"i like "<<person<<endl;



    return 0;
}