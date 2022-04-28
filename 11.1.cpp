#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class person{
    protected:
    char name[50];
    int code;
    public:
    person(char *n,int c){
        strcpy(name ,n);
        code=c;
    }
    void display(){
        cout<<"The name is:"<<name<<endl;
        cout<<"The code is:"<<code<<endl;
    }
};
class account:public person{
    protected:
    int salary;
    public:
    account(char *n,int c,int s):person(n,c){
        salary=s;
    }
    void display(){
        cout<<"The salary is:"<<salary<<endl;
    }
};
class admin:public person{
    protected:
    int no;
    public:
    admin (char *n,int c,int N):person(n,c){
        no=N;
    }
    void display(){
        cout<<"The no years of experiences is:"<<no<<endl;
    }
};
int main(){
    account a ("nis",10,5);
    admin b("nis",4,6);
    a.person::display();
    b.person::display();
    a.display();
    b.display();
    getch();
    
}