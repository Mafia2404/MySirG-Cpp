#include<iostream>
#include<string.h>
using namespace std;
class Person{
private:
    char name[20];
    int age;
public:
    Person(char name[],int age){
        strcpy(this->name,name);
        this->age=age;
    }
};
