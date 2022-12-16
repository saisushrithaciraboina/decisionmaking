#include<iostream>
#include<string>
using namespace std;
int main(){
	int i;
	string s;
	cin>>i>>s;
	if((s=="january"&&i>=1||i<=31)||(s=="febuary"&&i>=1||i<=28)||(s=="december"&&i>=21)||(s=="march"&&i<=20))
	{
		cout<<"spring";
	}
	else if((s=="april"&&i>=1||i<=30)||(s=="may"&&i>=1||i<=31)||(s=="march"&&i>=21)||(s=="june"&&i<=21))
	{
		cout<<"summer";
	}
	else if((s=="july"&&i>=1||i<=31)||(s=="august"&&(i>=1||i<=31))||(s=="june"&&i>=22)||(s=="september"&&i<=22))
	{
		cout<<"fall";
	}
	else if((s=="october"&&i>=1||i<=31||s=="november"&&i>=1||i<=30)||(s=="september"&&i>=23)||(s=="december"&&i<=20))
	{
		cout<<"winter";
	}
	return 0;
}
