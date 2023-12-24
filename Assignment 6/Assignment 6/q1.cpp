#include<iostream>
using namespace std;
void sort(int a[],bool=1);
int main(){
    int a[5]={4,5,2,6,1};
    sort(a,0);
    cout<<endl;
    sort(a);
    return 0;
}
void sort(int a[],bool x){
    int i,j,t;
    if(x==0){
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(a[i]<a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    cout<<"Decending order\n";
    for(i=0;i<5;i++)
    cout<<a[i]<<" ";
    }
    else{
        for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    cout<<"Ascending oreder\n";
    for(i=0;i<5;i++)
    cout<<a[i]<<" ";
    }
}