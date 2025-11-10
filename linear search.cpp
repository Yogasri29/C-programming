#include<stdio.h>
int main()
{
	int i ;
	int a[6];
	int data;
	{
	printf("enter the element");
}
for(i=0;i<5;i++)
{

	scanf("%d",&data);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]==data)
		{
		printf("element found at index %d",i);
		break;
		}
		else
		{
			printf("element not found");
		
		}
	}
}
