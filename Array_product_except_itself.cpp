#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={1,2,3,4,5};
    vector<int> ans(nums.size());
    for(int i=0; i<nums.size(); i++){
        int p=1;
        for(int j=0; j<nums.size(); j++){
            if(j!=i)
            p=p*nums[j];
        }
        ans[i]=p;
    }
    for(int i: ans){
        cout <<i<<",";
    }
}