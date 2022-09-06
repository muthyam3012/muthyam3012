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
	return 0;
}
