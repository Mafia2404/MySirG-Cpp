#include<iostream>
#include<string.h>
using namespace std;
class Customer{
private:
    int cust_id;
    char name[20],email[30],mobile[15];
public:
    Customer(){
        cust_id=0;
        strcpy(name,"-");
        strcpy(email,"abc@gmail.com");
        strcpy(mobile,"000");

        
    }
    Customer(int x,char y[],char a[],char b[]){
        cust_id=x;
        strcpy(name,a);
        strcpy(email,b);
        strcpy(mobile,y);
    }
    void showData(){
        cout<<cust_id<<name<<email<<mobile;
    }
};
