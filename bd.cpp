#include <iostream>
using namespace std;
int main(){
    int n,c,c1,l;
    cout <<"Enter system: ";
    cin >>c;
    cout <<"Enter number: ";
    cin >>n;
    cout <<"Convert to which system: ";
    cin >>c1;
    int p=1;
    int o=0;
    if(c==2){
        if(c1==10){
            while(n>0){
            l=n%10;
            o=o+(l*p);
            p=p*2;
            n=n/10;
        

        }cout <<o;}
    }

}

    