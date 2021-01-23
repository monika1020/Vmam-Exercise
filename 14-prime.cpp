#include<iostream>
using namespace std;
int main(){
	
	int low,high,i;
	bool isprime=true;
	cout<<"enter 2 values::"<<endl;
	cin>>low>>high;
	cout<<" prime no's between "<<low<<" and "<<high<<" are::"<<endl;
	while(low<high){
		isprime=true;
		if(low==0||low==1){
			isprime=false;
		}else{
			for(i=2;i<=low/2;i++){
				if(low%i==0){
					isprime=false;
					break;
				}
			}
		}
		if(isprime)
		cout<<low<<" ";
		low++;
	}
	return 0;
}
