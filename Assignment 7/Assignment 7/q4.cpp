#include<iostream>
using namespace std;
void swap(int x,int y);
int main(){
    int i;
    int a[5]={2,3,5,6,0};
    int b[5]={8,7,9,0,5};
   
    swap(a,b);
    
    for(i=0;i<5;i++)
         cout<<a[i]<<" ";

    cout<<endl;

    for(i=0;i<5;i++)
         cout<<b[i]<<" ";

    return 0;
}
void swap(int x[],int y[]){
    int temp,i;
    for(i=0;i<5;i++){
        temp=x[i];
        x[i]=y[i];
        y[i]=temp;

    }
   
        
    
}