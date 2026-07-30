#include <iostream>
#include <cmath>
using namespace std;


int main(){


    int grid[3][2]={
        {7,3},
        {10,11},
        {1,17}
    };
    cout<<grid[0][1]<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<grid[i][j]<<"|";
        }
        cout<<endl;
        
    }
    


    return 0;
}
