#include <iostream>  
using namespace std;  
int main(){
	int num;
	cout<<"enter a number:";
	cin>>num;
	if(num>0){
		cout<<"no is +ve";
		
	}
	else if(num<0){
		cout<<"no is -ve";
	}
	else{
		cout<<"no is zero";
	}
	return 0;
}
