#include<iostream>
using namespace std;
void prime(){
    int a,b,i,j;
    cout<<"Enter two no.:";
    cin>>a>>b;
    if(a>b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    for(i=a;i<=b;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j)
        cout<<i<<" ";
    }
}

int main(){
    prime();
    return 0;
}