#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> nums={2,2,1};
    int sum=0;
    for(int i: nums){
        sum^=i;
    }    
    cout <<sum;
    return sum;

}
