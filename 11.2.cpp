#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class media
{
protected:
char title[50];
int price;
public:
media(char *t,int p){
    strcpy(title,t);
    price=p;
    
}
void display()
{
    cout<<"The title is:"<<title<<endl;
    cout<<"The price is "<<price<<endl;
}
};
class book:public media{
    protected:
    char author[20];
    int no;
    public:
    book(char *t,int p,char *a,int n):media(t,p){
        strcpy(author,a);
        no=n;
        
    }
    void display(){
        cout<<"The author is:"<<author<<endl;
        cout<<"The no of pages are:"<<no<<endl;
    }
    
};
class videotape:public media
{
    int play;
    
public:
videotape(char *t,int p,int P):media(t,p){
    play=P;
}
void display(){
    cout<<"The play time is:"<<play<<endl;
}
};
int main(){
   
    book b("nis",1,"leo",4);
    videotape v("leo",2,6);
    b.media::display();
    v.media::display();
    b.display();
    v.display();
    getch();
    
}
