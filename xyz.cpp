#include<iostream>
#include<conio.h>
using namespace std;
class space{
int x,y,z;
public:
space(int a,int b, int c){
    x=a;
    y=b;
    z=c;
    
}
void display(){
    cout<<"x="<<x<<"y="<<y<<"z="<<z<<endl;
    
}
friend space operator-(space );
};
space operator-(space s){
    space s;
    s.x=s1.x;
    s.y=s1.y;
    s.z=s1.z;
    
   return s;
}
int main(){
    space s(1,2,3),s2;
    s.display();
s2=s;
cout<<"after negeting"<<endl;
s2.display();
getch();
}