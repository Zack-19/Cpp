#include <iostream>
#include <cmath>
using namespace std;

class Chef
{
private:

public:
    void makeChicken(){
        cout<<"chef makes chicken"<<endl;
    }
    void makeSalad(){
        cout<<"chef makes salad"<<endl;
    }
    void makeSpecialDish(){
        cout<<"chef makes kari"<<endl;
    }

};

class ItalianChef : public Chef {
    public :
         void makePasta(){
        cout<<"chef makes Pasta"<<endl;
    }
        void makeSpecialDish(){
        cout<<"chef makes pizza"<<endl;
    }

};



int main(){
    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();
    ItalianChef itChef;
    itChef.makeChicken();
    itChef.makePasta();
    itChef.makeSpecialDish();


    return 0;
}
