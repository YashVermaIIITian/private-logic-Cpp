#include<stdio.h>
void main(){
    int x , y;
    printf("enter x");
    scanf("%d",&x);
    printf("Enter y");
    scanf("%d",&y);
    if ((y==0) && (x!=0)){
        printf("point is on x-axis.");
    }
    else if((x==0) && (y!=0)){
        printf("point is on y-axis.");
    }
    else printf("point is at orgin.");}