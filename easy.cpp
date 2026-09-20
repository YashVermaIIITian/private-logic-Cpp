#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"Number of terms: ";
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout <<"Enter"<<(i+1) <<": ";
        cin >>arr[i];}
    for(int i=0; i<n; i++){
        if(arr[i]==8){
            cout <<i;
            return i;
        }
    } cout <<"-1";





    }