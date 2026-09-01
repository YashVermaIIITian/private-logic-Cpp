#include <iostream>
using namespace std;
int happy(int n,int s=0){
    cout << "Enter no: ";
    cin >> n;
    while(n>0){
        s=s+(n%10);
        n=n/10;}
        return s;}
int main(){
        cout << happy(34);
}