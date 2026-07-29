#include <iostream>
#include <cmath>
using namespace std;


int getMaxOfThree(int num1,int num2,int num3){
    int result;
    if (num1>=num2 && num1>=num3){
        result = num1;
    }else if (num1<=num2 && num2>=num3){
        result = num2;
    }else{
        result=num3;
    }

return result;
}

int main(){
    
   bool likeTomato = true;
   bool likeChiken = false;
   bool likePeper = false;

   if(likeTomato){
    cout<<"you like tomato"<<endl;
   }else {
    cout<<"you do not like tomato"<<endl;
   }

   if(likeTomato && likeChiken){
    cout<<"you like tomato and chiken"<<endl;
   }else if(likeTomato && !likeChiken){
    cout<<"you like tomato and do not like chiken"<<endl;
   } else {
        cout<<"you do not like tomato or do not like chiken"<<endl;
   }

   if(likeTomato || likePeper){
    cout<<"you like tomato or peper"<<endl;
   }

   cout<<getMaxOfThree(10,20,30)<<endl;
   cout<<getMaxOfThree(50,20,30)<<endl;
   cout<<getMaxOfThree(10,70,30)<<endl;



    return 0;
}
