#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    int small= INT_MAX;
    int big= INT_MIN;
    cout <<"Enter no of terms: ";
    cin >>n;
    int x[n];
    for(int i=0; i<n; i++){
    cin >>x[i];
}
    for(int i=0; i<n; i++){
        if(x[i]<small){
            small=x[i];
        }}
    for(int i=0; i<n; i++){
        if(x[i]>big){
            big=x[i];
        }
    }
    cout <<"smallest no is: " <<small <<endl;;
    cout <<"Biggest number is: "<<big;
}
    

