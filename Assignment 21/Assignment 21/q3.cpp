#include<iostream>
#include<stdio.h>
#include<fstream>
#define FILE_NOT_FOUND 1
using namespace std;
class Employee{
private:
    int emp_id;
    char name[20];
    float salary;
    static char filename[20];
public:
    void inputData(){
        cout<<"Enter empid:";
        cin>>emp_id;
        cout<<"Enter name:";
        cin.ignore();
        cin.getline(name,20);
        cout<<"Enter salary:";
        cin>>salary;
    }
    void displayData(){
        cout<<emp_id<<" "<<name<<" "<<" "<<salary<<endl;
    }
    void inputFile();
    void readFile();
    void search(int);
    void del(int);
    void edit(int);
};
void Employee::del(int id){
    Employee e;
    ifstream fin;
    ofstream fout;
    fin.open(filename,ios::in);
    if(!fin)
        throw FILE_NOT_FOUND;
    else{
        fout.open("tempoFile",ios::out);
        fin.read((char*)&e,sizeof(e));
        while(!fin.eof()){
            if(e.emp_id==id){
                cout<<"\nDeleted successfully!";
            }
            else{
            fout.write((char*)&e,sizeof(e));  
            }
            fin.read((char*)&e,sizeof(e));
        }
        fout.close();
        fin.close();
    }
    remove(filename);
    rename("tempoFile",filename);
}
void Employee::edit(int id){
    Employee e;
    ifstream fin;
    ofstream fout;
    fin.open(filename,ios::in);
    if(!fin)
        throw FILE_NOT_FOUND;
    else{
        fout.open("tempoFile",ios::out);
        fin.read((char*)&e,sizeof(e));
        while(!fin.eof()){
            if(e.emp_id==id){
                cout<<"\nEdit name:";
                cin.ignore();
                cin.getline(e.name,20);
                cout<<"\nEdit sal:";
                cin>>e.salary;
            }
            fout.write((char*)&e,sizeof(e));
            fin.read((char*)&e,sizeof(e));
        }
        fout.close();
        fin.close();
        remove(filename);
        rename("tempoFile",filename);

    }
}

void Employee::search(int id){
    ifstream fin;
    fin.open(filename,ios::in);
    if(!fin)
        throw FILE_NOT_FOUND;
    else {
        fin.read((char *)this,sizeof(*this));
        while(!fin.eof()){
            if(emp_id==id){
                displayData();
                break;
            }
            fin.read((char*)this,sizeof(this));
        }
        if(emp_id!=id)
            cout<<"\nEmployee not exist";
        fin.close();
    }
    
}
void Employee::inputFile(){
    ofstream fout;
    fout.open(filename,ios::app);
    fout.write((char*)this,sizeof(*this));
    fout.close();
}
void Employee::readFile(){
    ifstream fin;
    fin.open(filename,ios::in);
    fin.read((char*)this,sizeof(*this));
    if(!fin)
        throw FILE_NOT_FOUND;
    while(!fin.eof()){
        displayData();
        fin.read((char*)this,sizeof(*this));
    }
    fin.close();
}
int menu(){
    cout<<"\n1.Enter new Employee:";
    cout<<"\n2.view all Employee:";
    cout<<"\n3.Delete an Employee:";
    cout<<"\n4.Edit an Employee:";
    cout<<"\n5.Search an Employee:";
    cout<<"\n6.Exit";
    cout<<"\nEnter your choice";
    int c;
    cin>>c;
    return c;
}
char Employee::filename[20]="ques.txt";
int main(){
    Employee e1;
    int id;
    while(true){
        switch(menu()){
            
        case 1:e1.inputData();
                    e1.inputFile();
            break;
        case 2:try{
                    e1.readFile();
        }
        catch(int e){
            if(e==FILE_NOT_FOUND)
                cout<<"\nfile not found";
        }
            break;
        case 3:cout<<"\nEnter emp id to search:";
                cin>>id;
                try{
                 e1.del(id);                   
        }
        catch(int e){
            if(e==FILE_NOT_FOUND)
                cout<<"\nfile not found";
        }
            break;
        case 4:cout<<"\nEnter emp id to search:";
                cin>>id;
                try{
                 e1.edit(id);                   
        }
        catch(int e){
            if(e==FILE_NOT_FOUND)
                cout<<"\nfile not found";
        }
            break;
        case 5:cout<<"\nEnter emp id to search:";
                cin>>id;
                e1.search(id);
            break;
        case 6:
                exit(1);
        default:
            cout<<"Invalid choice";
            
        }
    }
    return 0;
}