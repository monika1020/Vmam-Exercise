#include <iostream>  
using namespace std;  
int main()
{
	int a,b,temp;
	cout<<"enter first number:";
	cin>>a;
	cout<<"enter second number:";
	cin>>b;
	cout<<"before swapping:"<<a<<" "<<b<<" "<<endl;
	temp=a;
	a=b;
	b=temp;
	
		cout<<"after swapping:"<<a<<" "<<b<<" ";
		return 0;
}
