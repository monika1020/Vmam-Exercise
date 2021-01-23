#include <iostream>  
using namespace std;  
int main(){
		int n,largest;
		int num[50];
cout<<"enter a no of elements:";
cin>>n;
for (int i=0;i<n;i++){
	cout<<"enter ele "<<(i+1)<<" is :";
	cin>>num[i];
	
}
largest =num[0];
for(int i=1;i<n;i++){
	if(largest<num[i])
		largest=num[i];
	
	
}
cout<<"legest ele is:"<<largest;
return 0;
}

