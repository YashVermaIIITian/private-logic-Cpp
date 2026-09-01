#include <iostream>
using namespace std;
int hello(int n){
    for(int i=1;i<=n; i++){
        int s=0;
        for(int j=1; j<=i;j++){
            if(i%j==0){
                s++;}}
            if(s==2){
            cout <<i <<endl;}}}
int main(){
    return hello(10);
}