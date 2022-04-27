#include<iostream>
#include<conio.h>
using namespace std;
class media
{
    protected:
    char title[50];
    float price;
    public:
    void get(){
        cout<<"enter the title:"<<endl;
        cin>>title;
        cout<<"Enter the price:"<<endl;
        cin>>price;
        
    }
    void display(){
        cout<<"The title is:"<<title<<endl;
        cout<<"The price is:"<<price<<endl;
        
    }
};
class book:public media
{
    int no;
    public:
    void get(){
        cout<<"Eneter the no of pages:"<<endl;
        cin>>no;
    }
    void display(){
        cout<<"the number of pages are"<<no<<endl;
        
    }
};
class videotape:public media{
    int play;
    public:
    void get(){
        cout<<"Enter the play time:"<<endl;
        cin>>play;
        
    }
    void display(){
        cout<<"The play time is:"<<play<<endl;
    }
};
int main(){
    book b;
    videotape t;
    b.media::get();
    b.media::display();
    b.get();
    t.get();
    b.media::display();
    b.display();
    t.display();
    getch();
    
    
    
}