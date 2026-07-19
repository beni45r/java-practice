#include<iostream>
using namespace std;
float rectangleArea(float length,float width){
	return length*width;
	
}
float circleArea(float radius){
	const float PI =3.14159;
	return PI*radius*radius;
	
}
int main(){
	int choice;
	float length,width,radius;
	cout<<"=====area calculator====="<<endl;
	cout<<"1.area of rectangle"<<endl;
	cout<<"2.area of circle"<<endl;
	cout<<"enter your choice:";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"enter length:";
			cin>>length;
			cout<<"enter width:";
			cin>>width;
			cout<<"area of rectangle="<<rectangleArea(length,width);
			break;
			case 2:
				cout<<"enter radius:";
				cin>>radius;
				cout<<"area of circle="<<circleArea(radius);
				break;
				default:
					cout<<"invalid choice!";
			
	}
	return 0;
}