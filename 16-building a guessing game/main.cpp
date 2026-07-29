#include <iostream>
#include <cmath>
using namespace std;




int main(){
    
    int secretNum= 9;
    int guess;
    int guessCount=0;
    int guessLimit=3;
    bool outOfChances =false;

    while (secretNum!=guess && !outOfChances)
    {
        if(guessCount< guessLimit){
            cout<<"enter a number : ";
            cin>>guess;
            guessCount++;
        }else{
            outOfChances = true;
        }
        
    }
     if (outOfChances)
     {
        cout<<"try again"<<endl;
     }else{
        cout<<"you win !"<<endl;
     }
     

     /*do
     {
        cout<<"enter a number : ";
        cin>>guess;
     } while (secretNum!=guess);
     cout<<"you win !";*/
     
    
    

    return 0;
}
