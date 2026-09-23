#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n=7,m=INT_MIN,s,e;
    int arr[n]={3,-4,5,4,-1,7,8};
    for(int i=0;i<n;i++){
        for(int j=i; j<n; j++){
            int sum=0;
            for(int k=i; k<=j; k++){
                sum+=arr[k];
            }
            if(sum>m){
                m=sum;
                s=i; e=j;

            }
            }
            

        }cout <<m<<endl;
        for(int i=s; i<=e;i++){
            cout <<arr[i]<<" ";
        }
        
        }
    

