#include <iostream>
using namespace std;
int main(){
    int n=4;
    int arr[n]={2,7,11,15};
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(arr[i]+arr[j]==9){
                cout <<arr[i]<<","<<arr[j];
                
            }
        }
    }

}