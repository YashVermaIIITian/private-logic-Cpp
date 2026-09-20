#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n,i1,i2;
    cout <<"Enter no of terms: ";
    cin >>n;
    int arr[n];
    int m=INT_MIN;
    int m1=INT_MAX;
    for(int i=0; i<n;i++){
        cout <<"ENTER"<<i+1<<": ";
        cin >>arr[i];}
    for(int i=0; i<n;i++){
        cout <<arr[i]<<", ";
    }
    for(int i=0; i<n; i++){
        if(arr[i]>m){
            m=arr[i];
            i1=i;}
        if(arr[i]<m1){
            m1=arr[i];
            i2=i;}
        }
     swap(arr[i1],arr[i2]);

        for(int i=0; i<n;i++){
        cout <<arr[i]<<", ";
    }
    
}