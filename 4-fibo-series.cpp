#include <iostream>  
using namespace std;  
int main()
{
	int n1=0,n2=1,n3,terms,i;
	cout<<"enter no of terms:";
	cin>>terms;
	cout<<n1<<" "<<n2<<" ";
	for(i=2;i<=terms;++i)
	{
	n3=n1+n2;
	cout<<n3<<" ";
	n1=n2;
	n2=n3;
	}
	return 0;
	
}
