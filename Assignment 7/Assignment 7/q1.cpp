#include<iostream>
using namespace std;
int hcf(int x,int y){
    int i,hcf;
    for(i=1;i<=(x>y?y:x);i++){
        if(x%i==0 && y%i==0){
            hcf=i;
        }
    }
  return hcf;  
}
int main(){
   cout<<"hcf is "<<hcf(3,9);
    return 0;
}