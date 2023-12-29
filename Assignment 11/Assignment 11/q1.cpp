#include<iostream>
using namespace std;
class Number{
private:
    int size;
    int *arr;
public:
    Number(int x,int *p){
        size=x;
        arr=new int[size];
    }
    Number(Number &n){
        delete []arr;
    }
    ~Number(){
        free(arr);
    }
    

};