#include<stdio.h>
#include<ctype.h>
int main(){
    char str[]="HELLO BACHOO";
    int freq[128]={0};
    for(int i=0; str[i]!='\0'; i++){
        char ch=tolower(str[i]);
        if(ch>=0 && ch<=128){
            freq[ch]++;
        }
    }
    for(int i=0; i<128; i++){
        if(freq[i]>0)
        printf("frequency of %c is- %d\n",i,freq[i]);
    }
    
}