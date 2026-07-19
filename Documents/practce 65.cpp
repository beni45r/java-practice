#include <iostream>
using namespace std;
float add(float,int);
void average(float,int);
int main()
{
	float result=add(45.5,45);
	average(45.5,45);
	return 0;
}
float add(float a,int b){
	float sum;
	sum=a+b;
	cout<<"sum="<<sum<<endl;
	return 0;
}
void average(float a,int b){
	float avg=(a+b/2.0);
	cout<<"average"<<avg<<endl;
}