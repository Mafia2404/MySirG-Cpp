#include<iostream>
#include<fstream>
using namespace std;
void storeInFile(){
    ofstream fout;
    fout.open("fileQ.txt",ios::app);
    fout<<"hello";
    fout.close();
}
void Display(){
    ifstream fin;
    char ch;
    fin.open("fileQ.txt",ios::in);
    ch=cin.get();
    while(!fin.eof()){
        cout<<ch;
        ch=cin.get();
    }
}
int main(){
    
    storeInFile();
    Display();
    return 0;
}