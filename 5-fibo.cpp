#include <iostream>  
using namespace std;  
int main()
{
	int n1=0,n2=1,n3,num;
	cout<<"enter a number:";
	cin>>num;
	cout<<n1<<" "<<n2<<" ";
	n3=n1+n2;
	while(n3<=num){
		cout<<n3<<" ";
		n1=n2;
		n2=n3;
		n3=n1+n2;
		
	}
	return 0;
}
