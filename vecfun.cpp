#include <iostream>
#include <vector>
using namespace std;
int fun(int n){
    vector <int> vec(n);
    for(int i=0; i<n;i++){
        cin >>vec[i];}
    for(int i: vec){
        cout <<i<<" ";
    }
    for(int i=0; i<n; i++){
        if(vec[i]==8){
            cout <<"\nFounded 8\n";
        }}
    if(n%2==0){
        for(int i=0; i<n/2; i++){
            swap(vec[n-i-1],vec[i]);}}   
    else{
    for(int i=0; i<(n+1)/2; i++){
            swap(vec[n-i-1],vec[i]);}}
    for(int i:vec){
        cout <<i<<" ";
    }}
int main(){
    fun(3);

}