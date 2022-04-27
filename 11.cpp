#include<iostream>
#include<conio.h>
using namespace std;
class student{
    protected:
    char name[20];
    int roll;
    public:
    void get(){
        cout<<"Enter the name and roll"<<endl;
        cin>>name>>roll;
        
    }
    void display(){
        cout<<"The name is:"<<name<<endl;
        cout<<"The roll is:"<<roll<<endl;
    }
    
};
class test:public student
{
    protected:
    int sub1,sub2;
    public:
    void get(){
        cout<<"ENter the marks in sub1:"<<endl;
        cin>>sub1;
        cout<<"ENter the marks in sub2:"<<endl;
        cin>>sub2;
    }
    void display(){
        cout<<"the mark in sub1 is :"<<sub1<<endl;
        cout<<"the marks in sub2 is :"<<sub2<<endl;
        
    }
};
class sport
{
    protected:
    int score;
    public:
    void get(){
        cout<<"enter the score:"<<endl;
        cin>>score;
        
    }
    void display(){
        cout<<"The score is:"<<score<<endl;
        
    }
};
class result:public test,public sport{
    int total;
    public:
    void display(){
        total=sub1+sub2+score;
        cout<<"The score is"<<total<<endl;
        
}
};
int main()
{

 result r;
 r.student::get();
 r.test::get();

 r.sport::get();
 r.student::display();
 r.test::display();
 
 r.display();
 getch();
}
 
