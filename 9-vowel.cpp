#include <iostream>  
using namespace std;  
int main(){
	char ch;
	cout<<"enter an alphabet:";
	cin>>ch;
	int upper,lower;
	upper=(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' );
	lower=(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' );
	if(upper || lower)
	cout<<" ch is vowel ";
	else
	cout<<" ch is consonant ";
	return 0;
	
}

