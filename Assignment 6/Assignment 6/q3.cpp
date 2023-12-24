#include<iostream>
using namespace std;
void rotate(int a[],int n,int=1,int=1);
int main(){
        int a[5]={1,5,4,2,6},i;
        
        rotate(a,5);
        cout<<endl;
        rotate(a,5,-1,1);
        cout<<endl;
        //orignal array also changed
         for(i=0;i<5;i++)
        cout<<a[i]<<" ";
        return 0;

}
void rotate(int a[],int x,int d,int n){
    int i,t,j;
    if(d==1){
        for(i=0;i<n;i++){
             t=a[4];
           for(j=x-1;j>=0;j--){
               
                a[j]=a[j-1];

           }
           a[0]=t;
        }
        cout<<"Right shift"<<endl;
        for(i=0;i<x;i++)
        cout<<a[i]<<" ";
    }
    else if(d==-1){
        for(i=0;i<n;i++){
            t=a[0];
            for(j=0;j<x;j++){
                a[j]=a[j+1];
            }
            a[4]=t;
        }
        cout<<"Left shift"<<endl;
        for(i=0;i<x;i++)
        cout<<a[i]<<" ";
    }
    else 
    cout<<"Enter valid shift";
}