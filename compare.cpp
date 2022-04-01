#include<iostream.h>
#include<Conio.h>
class compare{
	int a,b;
	public:
	void getdata();
	void displaydata();
	friend void comparedata(compare);	
};
void compare::getdata(){
	cout<<"Enter the value of a and b:"<<endl;
	cin>>a>>b;	
}
void compare::displaydata(){
	
	cout<<"The value of a and b is:"<<a<<b<<endl;
	
}
void comparedata(compare c1){
	if(c1.a>c1.b){
		
		cout<<c1.a<<"is maximum"<<endl;
		
	}
	else{
		cout<<c1.b<<"is maximum"<<endl;
		
	}}
	
	int main(){
	compare c1;
	c1.getdata();
	c1.displaydata();
	comparedata(c1);
	getch();
	}