#include<iostream>
#include<fstream>
using namespace std;
void copyfile(char source[],char destination[]){
    char ch;
    ofstream fout;
    ifstream fin;
    fin.open(source,ios::in);
    if(!fin)
        cout<<"file not found";
    else{
        fout.open(destination,ios::out);
        ch=fin.get();
        while(!fin.eof()){
            fout<<ch;
            ch=fin.get();            
        }
        fout.close();
    }
    fin.close();
}
int main(){
    char a[]="q2.cpp";
    char b[]="temp.cpp";
    copyfile(a,b);
    return 0;
}