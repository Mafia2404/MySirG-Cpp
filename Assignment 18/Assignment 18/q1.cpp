#include<iostream>
#include<string.h>
using namespace std;
class Person{
private:
    int age;
    char name[20];
protected:
    void setAge(int x){age=x;}
    void setName(char a[]){strcpy(name,a);}
    int getAge(){return age;}
    char* getName(){return name;}
};
class Employee:public Person{
private:
    float salary;
public:
    void setEmployee(float s){
        //user 2 can access protected method
        setAge(5);
        setName("abc");
        salary=s;
    }
    void showEmployee(){
        cout<<"\n age="<<getAge()<<" name="<<getName()<<" sal="<<salary<<endl;
    }
};
int main(){
   // Person p1;
    Employee e1;
    e1.setEmployee(345.3);
    e1.showEmployee();
    return 0;
    
}