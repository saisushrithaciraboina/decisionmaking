#include<iostream>
using namespace std;
int main(){
	int i;
	char ch;
	cin>>ch>>i;
	if(ch=='a'||ch=='c'||ch=='e'||ch=='g')
	{
	if(i%2==0)
		cout<<"square is white";
	}
	else if(ch=='b'||ch=='d'||ch=='f'||ch=='h')
	{
		if(i%2!=0)
		cout<<"square is white";
	}
		else
		{
			cout<<"square is black";
		}
	return 0;
}
