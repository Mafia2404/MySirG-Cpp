#include<iostream>
#include<string.h>
using namespace std;
class student{
private:
    int roll_no;
    char name[20];
    char branch[20];
public:
    student(int x,char a[],char b[]){
        roll_no=x;
        strcpy(name,a);
        strcpy(branch,b);
    }
    void showDetails(){
        cout<<roll_no<<" "<<name<<" "<<branch<<endl;
    }
};
int main(){
    student s1(1,"Apex","CS"),s2(2,"Ajax","Elect");
    s1.showDetails();
    s2.showDetails();
    return 0;
}