#include <iostream>
using namespace std;
int factorial(int n){
	int fact =1;
	for(int i=1;i<n;i++){
		fact=fact*i;
		
	}
	return fact;
}
int main(){
	int number;
	cout<<"Enter a number:";
	cin>>number;
	if(number<0){
		cout<<"factorial is not defined for negative number.";
		
	}
	else{
		cout<<"factorial of"<<number<<"is"<<factorial(number);
		
	}
	return 0;
}
