#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter no of terms: ";
    cin >>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cout <<"ENTER"<<i+1<<": ";
        cin >>arr[i];
    }
    if(n%2==0){
    for(int i=0; i<n/2; i++){
        swap(arr[n-1-i],arr[i]);}}
    else{
        for(int i=0; i<(n+1)/2; i++){
        swap(arr[n-1-i],arr[i]);}}

    cout <<"REVERSE IS: ";
    for(int i=0; i<n; i++){
        cout <<arr[i]<<" ";
    }
}