#include<iostream>
using namespace std;
void print(char a[],int,int=8);
int main(){
    char a[10]{'a','b','c','d','e','f','g','h','y','\0'};
    print(a,3);
    cout<<endl;
    print(a,4,7);
        return 0;
}
void print(char a[],int x,int y){
    int i;
    if(x<=y){
        for(i=x;i<=y;i++){
            cout<<a[i]<<" ";
        }
    }
    else 
        cout<<"Enter valid ends";
       
    
    }