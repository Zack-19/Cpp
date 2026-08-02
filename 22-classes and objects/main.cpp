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
};



int main(){
    
    Book book1;
    book1.title = "to the space";
    book1.auther = "jason amola";
    book1.pages = 256;

    Book book2;
    book2.title = "julimo adventure";
    book2.auther = "ana remstano";
    book2.pages = 341;

    cout<<book1.title<<endl;
    cout<<book2.title<<endl;

    return 0;
}
