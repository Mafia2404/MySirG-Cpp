//sum n odd natural no
#include<stdio.h>
int main(){
    int n,s=0,i;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<n*2;i=i+2){
        s=s+i;
    }
    printf("sum is %d",s);
    return 0;
}