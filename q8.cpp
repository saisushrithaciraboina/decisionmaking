#include<iostream>
#include<string>
using namespace std;
int main(){
	int i;
	string s; 
	cin>>i;
	if((s=="december"&& i>=22)||(s=="january"&&i<=19))
	{
		cout<<"capricon";
	}
	else if((s=="january"&& i>=20)||(s=="febuary"&&i<=18))
	{
		cout<<"aquarius";
	}
	else if((s=="febuary"&& i>=19)||(s=="march"&&i<=20))
	{
		cout<<"pisces";
	}
	else if((s=="march"&& i>=21)||(s=="april"&&i<=19))
	{
		cout<<"aries";
	}
	else if((s=="april"&& i>=20)||(s=="may"&&i<=20))
	{
		cout<<"taurus";
	}
	else if((s=="may"&& i>=21)||(s=="june"&&i<=20))
	{
		cout<<"gemini";
	}
		else if((s=="june"&& i>=21)||(s=="july"&&i<=22))
	{
		cout<<"cancer";
	}
	else if((s=="july"&& i>=23)||(s=="august"&&i<=22))
	{
		cout<<"leo";
	}
	else if((s=="august"&& i>=23)||(s=="september"&&i<=22))
	{
		cout<<"virgo";
	}
	else if((s=="septmber"&& i>=23)||(s=="october"&&i<=22))
	{
		cout<<"libra";
	}
	else if((s=="october"&& i>=23)||(s=="november"&&i<=21))
	{
		cout<<"scorpio";
	}
	else if((s=="november"&& i>=22)||(s=="december"&&i<=21))
	{
		cout<<"sagittarius";
	}
}
