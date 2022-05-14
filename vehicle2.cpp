#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class vehicle{
    protected:
    int price;
    char engine_type[20];
    public:
    vehicle(char *e,int p){
        strcpy(engine_type,e);
        price=p;
    }
    void display(){
        cout<<"Engine type is"<<engine_type<<endl;
        cout<<"price is:"<<price<<endl;
    }
};
class car:public vehicle{
   
    char brand[20];
    public:
    car(char *e,int p,char *b):vehicle(e,p){
        strcpy(brand,b);
        
    }
    void display(){
        cout<<"Brand is:"<<brand<<endl;
    }
};
class bike:public vehicle{
    
    char color[20];
    public:
    bike(char *e,int p,char *c):vehicle(e,p){
        strcpy(color,c);
        
    }
    void display(){
        cout<<"Color is "<<color<<endl;
    }
};
int main(){
    car c("gas engine",10000,"bmw");
    bike b("petrol",10000,"black");
    c.car::display();
    c.display();
    b.bike::display();
    b.display();
    getch();
}