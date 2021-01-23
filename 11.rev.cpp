#include<iostream>
using namespace std;
int main(){
	int n,rev=0,remainder;
	cout<<"enter a number::";
	cin>>n;
	while(n!=0){
		remainder=n%10;
	rev=rev*10+remainder;
	n/=10;	
		
	}

	cout<<"rev no is "<<rev;
	return 0;
}
