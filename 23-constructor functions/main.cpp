#include <iostream>
#include <cmath>
using namespace std;

class Book
{
private:
    /* data */
public:
    string title;
    string auther;
    int pages;
    Book(string argT,string argA,int argP){
        title = argT;
        auther = argA;
        pages = argP;
    }
    //other constructor
    Book(){
        title="no title";
        auther="no auther";
        pages = 0;
    } 
};



int main(){
    
    Book book1("to the space","jason amola",256);

    Book book2("julimo adventure","ana remstano",341);
    cout<<book1.title<<endl;
    cout<<book2.title<<endl;
    book2.title = "julimo adventures";
    cout<<book2.title<<endl;
    Book book3;
    cout<<book3.title<<endl;

    return 0;
}
