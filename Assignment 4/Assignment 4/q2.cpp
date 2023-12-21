#include<iostream>
using namespace std;
void heighest(){
    int t,a,x,max;
    cout<<"Enter a no.:";
    cin>>x;
    t=x%10;
    while(x!=0){
        x/=10;
        if(t<(x%10)){
            t=x%10;
        }
    }
    cout<<"max digit is "<<t;

}
int main(){
    heighest();
    return 0;
}