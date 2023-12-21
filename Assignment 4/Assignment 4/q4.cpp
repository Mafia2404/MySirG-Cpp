#include<iostream>
using namespace std;
int fact(int n){
    if (n==1 || n==0)
    return 1;
return n*fact(n-1);
}
int combi(int x,int y){
    return fact(x)/fact(y)/fact(x-y);
}
void pas(){
    int i,j,n,x,k;
    cout<<"Enter no. of rows:";
    cin>>n;
    for(i=0;i<n;i++){
        k=0, x=1;
        for(j=0;j<n*2;j++){
           
            if(j>=n-i && j<=n+i){
                if(x){
                    
                        cout<<combi(i,k++);
                }
                else
                cout<<" ";
                x=1-x;

            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
   
}
int main(){
    pas();
    return 0;
}