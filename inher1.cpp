#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class student{
    protected:
    char name[20];
    int roll;
    public:
    student(char *n,int r){
        strcpy(name,n);
        roll=r;
        
}
void display(){
    cout<<"Name is:"<<name<<endl;
    cout<<"Roll is:"<<roll<<endl;
}
};
class sport{
    protected:
    int score;
    public:
    sport(int s){
        score=s;
    }
    void display(){
        cout<<"The score is:"<<score<<endl;
    }
    
};
class test:public student{
    protected:
    int sub1,sub2;
    public:
    test(char *n,int r,int s1,int s2):student(n,r){
        sub1=s1;
        sub2=s2;
    }
    void display(){
        cout<<"The marks in sub1 is"<<sub1<<endl;
        cout<<"The marks in sub2 is"<<sub2<<endl;
    }
};
class result:public test,public sport{
    protected:
    int total;
    public:
    result(char *n,int r,int s1,int s2,int s):test(n,r,s1,s2),sport(s){
               total=s1+s2+s;
    }
    void display()
    {
 cout<<"The result is"<<total<<endl;
        
}};
int main(){
    result r("nischal",2,44,55,10);
    r.student::display();
    r.test::display();
    r.sport::display();
    r.display();
    getch();
    
}
