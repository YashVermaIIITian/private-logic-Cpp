#include <iostream>
using namespace std;
int main(){
    int n,s,z;
    s=0;
    cout <<"Number of terms: ";
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout <<"Enter"<<(i+1) <<": ";
        cin >>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]==8){
            s=s+1;
            z=i;}}
    if(s==1){
        cout<<"AT INDEX: "<<z;    }
        else{
            cout <<"NOT FOUND";
        }

}