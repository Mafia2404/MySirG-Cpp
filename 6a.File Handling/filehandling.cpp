#include<iostream>
#include<fstream>
using namespace std;
void write(){
     ofstream fout;
    fout.open("file.txt",ios::out);
    fout<<"Hello";
    fout.close();
}
int main(){
    char ch;
    ifstream fin;
    fin.open("file.txt",ios::in);
    fin>>ch;
    while(!fin.eof()){
        cout<<ch;
        fin>>ch;
    }
    return 0;
}