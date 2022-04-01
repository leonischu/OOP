#include <iostream.h>
#include<conio.h>
using namespace std;
class rational{
int num,den;
public:
	void inputrational();
	void dispalyrational();
	void convert();
	void invert();
};
void rational::inputrational(){
	cout<<"Enter the value of numerator and denominator:"<<endl;
	cin>>num>>den;
	
}
void rational::dispalyrational(){
cout<<"The rational number is:"<<num<<"/"<<den<<endl;
}
void rational::convert(){
	cout<<"rational number in real form is:"<<((float )num/den)<<endl;
}
void rational::invert(){
	int temp ;
	temp=num;
	num=den;
	den=temp;

}
 main(){
	rational x;
	x.inputrational();
	x.dispalyrational();
	x.convert();
	x.invert();
	x.dispalyrational();
	x.convert();
	getch();
	
}