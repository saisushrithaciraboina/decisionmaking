#include<stdio.h>
int main(){
    char i;
	printf("enter letter");
	scanf("%s",&i);
    if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')
    {
    	printf("the letter is vowel");
    }
    else if(i=='y')
    {
    	printf("sometimes vowel or consonent");
	}
	else
	{
		printf("it is consonent");
	}
	return 0;
}
