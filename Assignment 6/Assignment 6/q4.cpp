#include<iostream>
using namespace std;
int largest(int a,int b,int c){
    if(a>b && a>c)
        return a;
    else{
        if(b>c)
            return b;
        else
            return c;
    }    
}
int lcm(int a,int b, int c){
    int i,L;
    for(i=largest(a,b,c) ;i<=a*b*c;i++){
        if(L%a==0 && L%b==0 && L%c==0){
            return L;
        }
    }
}
int main(){
    cout<<"Lcm is "<<lcm(2,3,5);
    return 0;
}