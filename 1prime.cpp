#include <iostream>  
using namespace std;  
int main(){
	int i,n,m=0,flag=0;
	cout<<"enter a number:";
	cin>>n;
	m=n/2;
	for(i=2;i<=m;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<"no is prime";
	else
	cout<<"no is not prime";
	return 0;
}
