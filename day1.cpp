//program to find the difference betwen two complex number 
//by overloading + and - operator.
#include<iostream>
#include<conio.h>
using namespace std;
class complex{
    private:
    float real;
    float img;
    public:
    complex(){
        real=0.0;
        img=0.0;
        
    }
    complex(float x, float y){
        real= x;
        img =y;
        
        
    }
    void outdata(char *msg){
        cout<<endl<<msg;
        cout<<img<<real<<endl;
    }
    friend complex operator+(complex,complex);
    friend complex operator-(complex,complex);
};
complex operator+(complex c1,complex c2){
    complex temp;
    temp.real=c1.real+c2.real;
    temp .img=c1.img-c2.img;
    return temp;
    
}
int main(){
    complex c1(2.5,3.5),c2(1.6,2.7),c3;
    c1.outdata();
    c2.outdata();
    c3=c1+c2;
    c3.outdata;
    c3=c1-c2;
    c3.outdata();
    return 0;
}
}