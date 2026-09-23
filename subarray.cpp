#include <iostream>
using namespace std;
int  main(){
    int  n=4;
    int arr[n]={1,6,7,45};
    for(int i=0; i<n; i++){
        for(int j=i;j<n; j++){
            for(int k=i;k<=j;k++){
                cout <<arr[k];
            }cout <<" ";
        }
        cout <<endl;
    }
}