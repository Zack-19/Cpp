#include <iostream>
#include <cmath>
using namespace std;


int power(int base, int powerNum){
    int result=1;
    for (int i = 0; i < powerNum; i++)
    {
        result = result*base;
    }
    
    return result;
}

int main(){
     cout<<power(5,0)<<endl;
     cout<<power(2,3)<<endl;
     cout<<power(4,4)<<endl;



    return 0;
}
