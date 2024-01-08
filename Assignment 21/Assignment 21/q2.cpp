#include<iostream>
#include<fstream>
using namespace std;
void read_and_disp(char file[]){
    char ch;
    ifstream fin;
    fin.open(file,ios::in);
    if(!fin)
        cout<<"file not found!";
    else{

    ch=fin.get();
    while(!fin.eof()){
        cout<<ch;
        ch=fin.get();
    }
    }
    fin.close();
}
int main(){
    char a[]="q2.cpp";
    read_and_disp(a);   
    return 0;
}