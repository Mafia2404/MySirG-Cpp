#include<iostream>
#include<string.h>
using namespace std;
class Student{
private:
    int roll_no;
    char name[20];
    int age;
public:
    void setStudent(int x,char a[],int y){
        roll_no=x;
        strcpy(name,a);
        age=y;
    }
    void showStudent(){
        cout<<"\n roll_no="<<roll_no<<" name="<<name<<" age="<<age<<endl;
    }
    friend bool operator==(Student,Student);
};
bool operator==(Student S,Student C){
    if(S.roll_no==C.roll_no && S.age==C.age){
        if(strcmp(S.name,C.name)==0)
        return true;
    }
    return false;
}
int main(){
    Student s1,s2,s3;
    s1.setStudent(1,"rahul",34);
    s2.setStudent(2,"Aman",35);
    s3.setStudent(2,"Aman",35);
    if(s3==s2)
        cout<<"Equal";
    else    
        cout<<"Not Equal";
        return 0;
}