#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class person
{
    protected:
    char name[50];
    int code;
    public:
    person(char *n,int c)
    {
        strcpy(name,n);
        code=c;
    }
    void display()
    {
        cout<<"Name is:"<<name<<endl;
        cout<<"code is:"<<code<<endl;
    }
};
class account:public virtual person{
    protected:
    int salary;
    public:
    account(char *n,int c,int s):person(n,c){
        salary=s;
    }
    void display(){
        cout<<"salary is:"<<salary<<endl;
        
    }
    
};
class admin:public virtual person{
    protected:
    int no;
    public:
    admin(char *n,int c,int a):person(n,c){
        no=a;
    }
    void display(){
        cout<<"The number of years of experience is:"<<no<<endl;
    }
};
class record:public account,public admin{
    int rec;
    public:
    record(char *n,int c,int s,int a,int r):person(n,c),account(n,c,s),admin(n,c,a){
        rec=r;
    }
    void display(){
        cout<<"The record number is:"<<rec<<endl;
    }
};
int main(){
    record r("Nischal",1,200000,2,3);
    r.person::display();
    r.account::display();
    r.admin::display();
    r.display();
    getch();
}