#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n=7,m=INT_MIN,sum=0;
    int arr[7]={3,-4,5,4,-1,7,-8};
    for(int i=0; i<n; i++){
        sum+=arr[i];
        m=max(sum,m);
        if(sum<0){
            sum=0;}
        } cout <<m;
}