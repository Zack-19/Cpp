#include <iostream>
#include <cmath>
using namespace std;

class Movie
{
private:
    string rating;
public:
    string title;
    string director;
    Movie(string argT,string argD,string argR){
        title = argT;
        director = argD;
        setRating(argR);
    }
    void setRating(string argR){
        if(argR=="g"|| argR=="pg"||argR=="pg-13"||argR=="r"||argR=="nr"){
            rating = argR;
        }else{
            rating = "nr";
        }
    }
    string getRating(){
        return rating;
    }

};



int main(){
    
    Movie avengers("the avengers","joss","pg-13");
    cout<<avengers.getRating()<<endl;
    avengers.setRating("7y");
    cout<<avengers.getRating()<<endl;

    return 0;
}
