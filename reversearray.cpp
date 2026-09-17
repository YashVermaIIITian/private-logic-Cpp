#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"ENTER no of terms: ";
    cin >>n;
    int arr[n];
    int newarr[n];
    for(int i=0; i<n;i++){
        cout <<"Enter"<<i+1<<": ";
        cin >>arr[i];
    }
    for(int i=0; i<n ;i++){
        newarr[n-1-i]=arr[i];
    }
    cout <<"Reverse array is: ";
    for(int i=0; i<n ;i++){
        cout <<newarr[i] <<" ";
    }
}
