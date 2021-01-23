#include <iostream>  
using namespace std;  
int main(){
	int x,y;
	cout<<"enter 2 no's::";
	cin>>x>>y;
	cout<<"before swapping:"<<x<<" "<<y<<" "<<endl;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"after swapping:"<<x<<" "<<y<<" "<<endl;
	return 0;
}
