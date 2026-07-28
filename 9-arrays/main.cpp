#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int nums []={5,10,26,27,58};
    nums[2]=20;
    cout<<nums[2]<<endl;
    int nums2 [10]={5,10,26,27,58};
    nums2[9]=20;
    cout<<nums2[9]<<endl;
    int nums3 [10];
    nums3[9]=21;
    cout<<nums3[9]<<endl;

    return 0;
}