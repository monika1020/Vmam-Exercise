#include<iostream>
using namespace std;
int main(){
	int num,n,rev=0,rem;
	cout<<"enter an integer::";
	cin>>n;
	num=n;
	do{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
		
	}
	while(n!=0);
	cout<<"rev no is "<<rev<<endl;
	if(num==rev)
	cout<<"no is palindrome";
	else{
			cout<<"no is not palindrome";
	}
	return 0;
	
}
