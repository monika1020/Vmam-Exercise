#include<iostream>
using namespace std;
int main(){

   int num,sum=0,digit;
   cout<<"enter a number:";
   cin>>num;
   
   for(int temp=num;temp!=0;){
   	digit=temp%10;
   	sum=sum+(digit*digit*digit);
   	temp=temp/10;
   }
   if(num==sum)
   cout<<sum<<"is an Armstrong no";
   else
   cout<<sum<<"is not an Armstrong no";
return 0;
}
