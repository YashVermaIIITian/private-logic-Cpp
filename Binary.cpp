#include <iostream>
using namespace std;
int main(){
    int n,c,c1,l,y;
    cout <<"Enter system: ";
    cin >>c;
    cout <<"Enter within the range of the following number system";
    cout <<"Enter number: ";
    cin >>n;
    cout <<"Convert to which system: ";
    cin >>c1;
    int p=1;
    int o=0;
    if(c==2){
        if(c1==10){
            while(n>0){
            o=o+((n%10)*p);
            p=p*2;
            n=n/10;
         }cout <<o;}
        if(c1==8){
            while(n>0){
                int p=1;
                for(int i=0; i<3;i++){
                    o=o+((n%10)*p);
                    p=p*2;
                    n=n/10;}
                }cout <<o;}
        if(c1==16){
            while(n>0){
                int p=1;
                for(int i=0;i<4;i++){
                    o=o+((n%10)*p);
                    p=p*2;
                    n=n/10;}
                    }cout <<o;}}
    if(c==10){
        if(c1==2){
            while(n>0){
                o=o+((n%2)*p);
                p=p*10;
                n=n/2;}
                }cout <<o;

    }
        
                    
            
         
    }



    