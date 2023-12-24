#include<iostream>
using namespace std;
void primeFact(int n){
    int i,j;
    for(i=2;i<=n;i++){
        if(n%i==0){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j)
        cout<<i<<" ";
        n/=i;
    }}
}
int main(){
    primeFact(36);
    return 0;
}