#include<iostream>
#include<conio.h>
using namespace std;
class shape
{
    protected:
    float width,height;
    public:
   void  getvalue(){
        cout<<"Enter the value of width and height"<<endl;
        cin>>width>>height;
        
    }
};
class Recgtangle:public shape
{
    public:
    float calculatearea(){
        return (width*height);
    }
    };
    int main(){
        Recgtangle R;
        R.getvalue();
        cout<<"area of rectangle is"<<R.calculatearea()<<endl;
        getch();
        
        
    }