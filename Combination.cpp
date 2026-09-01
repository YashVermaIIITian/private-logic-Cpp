#include <iostream>
using namespace std;
int fun(int n, int r){
    int p=1; int p2=1; int p3=1;
    for(int i=1; i<=n;i++){
        p*=i;}
    for(int i=1; i<=r; i++){
        p2*=i;}
    for(int i=1; i<=(n-r); i++){
        p3*=i;}
    cout <<(p/(p3*p2));}
int main(){
    return fun(3,2);
}
