//pure polymerphism
#include<iostream>
#include<conio.h>
using namespace std;
class polygon
{
    protected:
    float width,height;
    public:
    void setdata(float w,float h){
        width=w;
        height=h;
        
    }
    virtual float area(){
        return (width+height);//test only
    }
    
};
class rectangle:public polygon{
    float area(){
        return(width*height);
    }
};
class triangle:public polygon{
    public:
    float area(){
        return(0.5*width*height);
    }
};
int main(){
    polygon p,*p1;
    rectangle r;
    triangle t;
    p1=&p;
    p1->setdata(5,10);
    cout<<"area of polygon is:"<<p1->area()<<endl;
    p1=&r;
    p1->setdata(5,20);
    cout<<"Area of triangle is:"<<p1->area()<<endl;
    p1=&t;
        p1->setdata(5,10);
        cout<<"area is:"<<p1->area()<<endl;
        return 0;
        getch();
}
