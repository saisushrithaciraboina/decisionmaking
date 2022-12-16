#include<iostream>
using namespace std;
int main(){
	char i;
	cin>>i;
	if(i=='january'||i=='march'||i=='may'||i=='july'||i=='august'||i=='october'||i=='december')
	{
		cout<<"there are 31 days in the month";
	}
	else if(i=='febuary')
	{
		cout<<"there are 28 or 29 days in the month";
	}
	else
	{
		cout<<"there are 30 days in the month";
	}
}
