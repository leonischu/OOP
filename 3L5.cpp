#include<iostream>
#include<conio.h>
using namespace std;
class complex{
    int real,img;
    public:
    complex(){
        real=0;
        img=0;
    }
    complex(int x,int y){
        real=x;
        img=y;

    }
    void show(){
        cout<<"complex number is:"<<real<<"+i"<<img<<endl;

    }
    friend void addcomplex(complex c1,complex c2){
        complex c3;
        c3.real=c1.real+c2.real;
        c3.img=c1.img+c2.img;
        c3.show();
    }
};
    int main(){
        int real,img;
        cout<<"Enter the value of real and img"<<endl;
        cin>>real>>img;
        complex c1(real,img),c2(3,4),c3;
        c1.show();
        c2.show();
        addcomplex(c1,c2);
        getch();
    }
