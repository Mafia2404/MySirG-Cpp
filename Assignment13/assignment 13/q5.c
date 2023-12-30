//sum of cube of n natural no
#include<stdio.h>
int main(){
    int n,s=0,t;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n!=0){
        t=n*n*n;
        s=s+t;
        n--;
    }
    printf("Sum is %d",s);
    return 0;
}