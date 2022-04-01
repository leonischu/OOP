#include<iostream.h>
#include<conio.h>
class time{
	int hr,min,sec;
	public:
	void gettime();
	void displaytime();
	friend time addtime(time t1,time t2);
	
};
void time::gettime(){
	cout<<"enter time in  hr min sec:"<<endl;
	cin>>hr>>min>>sec;	
}
void time::displaytime(){
	cout<<"The time is"<<hr<<"hours"<<min<<"min"<<sec<<"sec"<<endl;
}

 time addtime(time t1, time t2)
 	{
	
	time t3;
	t3.sec=t1.sec+t2.sec;
	t3.min=t3.sec/60;
	t3.sec=t3.sec%60;
	t3.min=t1.min+t2.min+t3.min;
	t3.hr=t3.min/60;
	t3.min=t3.min%60;
	t3.hr=t1.hr+t2.hr+t3.hr;
	return t3;	
	
}
int	 main(){
	time t1,t2,t4;
	t1.gettime();
	t2.gettime();
	t1.displaytime();
	t2.displaytime();
	t4=addtime(t1,t2);
	t4.displaytime();
	getch();
	return(1);
	
	
}