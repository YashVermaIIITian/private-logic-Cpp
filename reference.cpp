#include <iostream>
using namespace std;
int carr(int arr[],int n){
    for(int i=0; i<n; i++){
        arr[i]=4*arr[i];
        cout <<arr[i] <<"\t";
    }
}
int main(){
    int arr[]={23,-9,4};
    for(int i=0; i<3;i++){
        cout <<arr[i] <<"\t";
    }cout<<"\n";
    carr(arr, 3);
    

    
}