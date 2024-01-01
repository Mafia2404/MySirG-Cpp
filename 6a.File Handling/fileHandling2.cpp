#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#define FILE_NOT_FOUND 1
using namespace std;
class Book{
private:
    int book_id;
    char title[20];
    float price;
    static char filename[20];
public:
    void inputBook();
    void showBook();
    void storeBook();
    void viewAllBooks();
    static void setFileName(char *a){
        strcpy(filename,a);
    }
};
void Book::inputBook(){
    cout<<"Enter book id:";
    cin>>book_id;
    cout<<"\nEnter title:";
    cin.ignore();
    cin.getline(title,20);
    cout<<"\nEnter price:";
    cin>>price;
}
void Book::showBook(){
    cout<<"\nBook id="<<book_id<<" title="<<title<<" price="<<price<<endl;
}
void Book::storeBook(){
    ofstream fout;
    fout.open(filename,ios::binary|ios::app);
    //cout<<this;
    fout.write((char *)this,sizeof(*this));//typecaste becoz of write fn.
    fout.close();
}
void Book::viewAllBooks(){
    
    ifstream fin;
   fin.open(filename,ios::binary|ios::in);   
   if(!fin)
        throw  FILE_NOT_FOUND;
    fin.read((char *)this,sizeof(*this));
    while(!fin.eof()){
        showBook();
        fin.read((char *)this,sizeof(*this));
    }
   fin.close();
   }
int menu(){
    cout<<"\n1.Enter new Book:";
    cout<<"\n2.Display Books:";
    cout<<"\n3.Exit";
    cout<<"\nEnter your choice:";
    int c;
    cin>>c;
    return c;
}

char Book::filename[20]="file1";
int main(){
   // Book::setFileName("file1");
    Book b1;
    while(true){
       
        switch(menu()){
            case 1:b1.inputBook();
                   b1.storeBook();
                break;
            case 2:try{
                b1.viewAllBooks();
            }
            catch(int e){
                if(e==(FILE_NOT_FOUND))
                    cout<<"No file found";
            }
                
                break;
            case 3:exit(1);
            default:
                cout<<"Enter a valid choice";
        }
    }
    return 0;
}
