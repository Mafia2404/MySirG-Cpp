#include<iostream>
#include<string.h>
using namespace std;
class Book{
private:
    int book_id;
    char title[20];
    float price;
public:
    Book(){
        book_id=0;
        strcpy(title,"null");
        price=0.0f;
    }    
    Book(int x,char a[],float y){
        book_id=x;
        strcpy(title,a);
        price=y;
    }
};