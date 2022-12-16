#include<iostream>
using namespace std;
int main(){
	int i;
	cin>>i;
	if(i%400==0)
	{
		cout<<"it is leap year";
	}
	else if(i%100==0)
	{
		cout<<"it is not a leap year";
	}
	else if(i%4==0)
	{
		cout<<"it is leap year";
	}
	else
	{
		cout<<"it is not a leap year";
	}
}
