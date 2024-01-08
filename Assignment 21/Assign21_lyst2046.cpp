#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
void f1(char file1[],char file2[])
{
    char ch;
    ifstream fin;
    ofstream fout;
    fin.open(file1,ios::in);
    if(!fin)
        cout<<"File not found";
    else{
        fout.open(file2,ios::out);
        ch=fin.get();
        while(!fin.eof())
        {
            fout<<ch;
            ch=fin.get();
        }
        fout.close();
    }
    fin.close();
}
void f2(char file1[])
{
    char ch;
    ifstream fin;
    fin.open(file1,ios::in);
    if(!fin)
        cout<<"File not found";
    else{

        ch=fin.get();
        while(!fin.eof())
        {
            cout<<ch;
            ch=fin.get();
        }
        
    }
    fin.close();
}

class Employee
{
    private:
        int empid;
        char name[30];
        float salary;
    public:
        void input()
        {
            cout<<"\nEnter employee id, name and salary";
            cin>>empid;
            cin.ignore();
            cin.getline(name,30);
            cin>>salary;
        }
        void display()
        {
            cout<<endl;
            cout<<empid<<" ";
            cout<<name<<"  ";
            cout<<salary<<endl;
        }
        void store();
        void printAll();
        void search(int id);
        void edit(int id);
        void del(int id);

};
void Employee::store()
{
    ofstream fout;
    fout.open("EmployeeFile",ios::binary|ios::app);
    fout.write((char*)this,sizeof(*this));
    fout.close();
}
void Employee::printAll()
{
    ifstream fin;
    fin.open("EmployeeFile",ios::binary|ios::in);
    if(!fin)
        cout<<"File Not Found";
    else
    {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            display();
            fin.read((char*)this,sizeof(*this));
        }
    }
    fin.close();
}
void Employee::edit(int id)
{
    Employee e;
    ifstream fin;
    ofstream fout;
    fin.open("EmployeeFile",ios::binary|ios::in);
    if(!fin)
        cout<<"File Not Found";
    else
    {
        fout.open("tempfile",ios::binary|ios::out);
        fin.read((char*)&e,sizeof(e));
        while(!fin.eof())
        {
            if(id==e.empid)
            {
                cout<<"Enter correct Employee name: ";
                cin.ignore();
                cin.getline(e.name,30);
                cin>>e.salary;
            }
            fout.write((char*)&e,sizeof(e));
            fin.read((char*)&e,sizeof(e));
        }
        remove("EmployeeFile");
        rename("tempfile","EmployeeFile");
    }
    fin.close();
}
void Employee::search(int id)
{
    ifstream fin;
    fin.open("EmployeeFile",ios::binary|ios::in);
    if(!fin)
        cout<<"File Not Found";
    else
    {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            if(empid==id)
            {
                display();
                break;
            }
            fin.read((char*)this,sizeof(*this));
        }
        if(empid!=id)
            cout<<"Search Failed, record not found";
    }
    fin.close();
}
void Employee::del(int id)
{
    Employee e;
    ifstream fin;
    ofstream fout;
    fin.open("EmployeeFile",ios::binary|ios::in);
    if(!fin)
        cout<<"File Not Found";
    else
    {
        fout.open("tempfile",ios::binary|ios::out);
        fin.read((char*)&e,sizeof(e));
        while(!fin.eof())
        {
            if(id!=e.empid)
            {
                fout.write((char*)&e,sizeof(e));
            }
            
            fin.read((char*)&e,sizeof(e));
        }
        remove("EmployeeFile");
        rename("tempfile","EmployeeFile");
    }
    fin.close();
}


int menu()
{
    int choice;
    cout<<"\n1. New Record";
    cout<<"\n2. Edit Record";
    cout<<"\n3. View All Records";
    cout<<"\n4. Search a Record";
    cout<<"\n5. Delete a Record";
    cout<<"\n6. Exit";
    cout<<"\n\nEnter your choice";
    cin>>choice;
    return choice;
}
int main()
{
    Employee emp;
    int id;
    while(true)
    {
        switch(menu())
        {
            case 1:
                emp.input();
                emp.store();
                break;
            case 2:
                cout<<"Enter employee id to edit";
                cin>>id;
                emp.edit(id);
                break;
            case 3:
                emp.printAll();
                break;
            case 4:
                cout<<"Enter employee id to search";
                cin>>id;
                emp.search(id);
                break;
            case 5:
                cout<<"Enter employee id to delete";
                cin>>id;
                emp.del(id);
                break;
            case 6:
                exit(0);
            default:
                cout<<"\nInvalid Choice";
        }
    }
    cout<<endl;
    return 0;
}