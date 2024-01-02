#include<iostream>
#include<string.h>
using namespace std;
class String{
private:
    int length;
    char *pointer;
public:
    void setString(int x){
        length=x;
        char s[length];
        pointer=string(x);
            cout<<"Enter string:";
            cin>>s;
           // cin.ignore();
            //cin.getline(s,length)>>s;
         for(int i=0;i<length;i++){
            pointer[i]=s[i];
        }
    }
        void stringUpper(){
           strupr(pointer);       
           
        }
        void stringLower(){
            strlwr(pointer);
        }
    void showString(){
        cout<<endl;
        for(int i=0;i<length;i++){
            cout<<pointer[i];
        }
    }
    int getlenght(){
        return length;
    }
    char* getString(){
        return pointer;
    }
    char* string(int x){
        char *ptr= new char[x];
        return ptr;
    }
    

};
int main(){
    String s1;
    s1.setString(5);
    s1.showString();
    //lower case
    s1.stringLower();
    s1.showString();
    //upper case
    s1.stringUpper();
    s1.showString();
    cout<<endl;
    //return string
    cout<<s1.getString();
    //return length
    cout<<endl<<s1.getlenght();
    return 0;
}