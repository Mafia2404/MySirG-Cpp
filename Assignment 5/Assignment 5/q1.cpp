#include<iostream>
using namespace std;
void swap(int &p,int &q)
{
    int t=p;
    p=q;
    q=t;
    
}
int main(){
    int a,b;
    cout<<"Enter two no.:";
     cin>>a>>b;
        swap(a,b);
}