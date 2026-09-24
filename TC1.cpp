#include <iostream>
#include <vector>
using namespace std;
vector<int> hello(vector <int>vec,int t){
    int i=0,j=vec.size()-1;
    while(i<j){
        int sum =vec[i]+vec[j];
        if(sum>t){
            j--;
        }
        if(sum<t){
            i++;
        }
        if(sum==t){cout <<vec[i]<<","<<vec[j]; break;}
    }
}
int main(){
    vector <int> vec={2,7,11,15};
    hello(vec,18);
}