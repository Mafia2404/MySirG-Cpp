//sum of first n natural no
#include<stdio.h>
int main(){
    int n,s=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n!=0){
        s=s+n;
        n--;

    }
    printf("%d",s);
    return 0;
}