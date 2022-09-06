#include<stdio.h>
int main()
{
	int age;
	printf("enter your age : ");
	scanf("%d",&age);
	if(age>=11)
	printf("your are eligible for vote : ");
	else
	printf("you are not eligible for vote : ");
	printf("you are allowed to vote after %d",18 - age);
	return 0;
}
