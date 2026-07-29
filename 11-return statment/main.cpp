#include <iostream>
#include <cmath>
using namespace std;


double Cube (double num){
    return num*num*num;
}

int main(){
    
    double answer = Cube(7);
    cout<<answer;
    cout<<Cube(8);

    return 0;
}
