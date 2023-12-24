#include<iostream>
#include<string.h>
using namespace std;
void sortString(char str[][20],int x,bool=1);
int main(){
    int i;
    char str[3][20]={"Delhi","Jaipur","Mumbai"};
    cout<<"Ascending order"<<endl;
    sortString(str,3);
    cout<<endl;
    cout<<"Desending order"<<endl;
    sortString(str,3,0);
     cout<<endl<<"original\n";
     for(i=0;i<3;i++)
    cout<<str[i]<<" ";
    return 0;
}
void sortString(char str[][20],int x,bool asc){
    int i,j;
    char temp[50];
    for(i=0;i<x-1;i++){
        for(j=i+1;j<x;j++){
            if(asc==true && strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
            else if(asc==false && strcmp(str[i],str[j])<0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    for(i=0;i<3;i++)
    cout<<str[i]<<" ";
}