#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
   int num1,num2,result;
   char op;
   bool valid = true;
   cout<<"enter 1st number : ";
   cin>>num1;
   cout<<"enter operator (+,-,*,/) : ";
   cin>>op;
   cout<<"enter 2nd number : ";
   cin>>num2;

   if(op=='+'){
    result = num1+num2;
   }else if (op=='-'){
    result = num1-num2;
   }else if (op =='*'){
    result = num1*num2;
   }else if (op=='/'){
    result = num1/num2;
   }else {
    cout<<"invalid operation"<<endl;
    valid =false;
   }
   if (valid){
    cout<<"result : "<<result <<endl;

   }

    return 0;
}
