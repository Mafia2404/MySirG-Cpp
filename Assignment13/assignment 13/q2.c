//sum of n even natural no
#include<stdio.h>
int main(){
    int n,i,s=0;
    printf("Enter a value of n:");
    scanf("%d",&n);
    for (i=2;i<(n*2)+2;i=i+2){
        s=s+i;
    }
    printf("sum is %d",s);
    return 0;
}