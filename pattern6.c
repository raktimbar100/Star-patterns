#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the numbers:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i==0 || i==n-1)
		{
		
		for(j=0;j<n;j++)
		{
		
		printf("*");
		
  	     }
       }
       else{
       	for(j=1;j<=1;j++)
       	{
       		printf("* ");
		   }
		   for(j=1;j<=1;j++)
       	{
       		printf(" *");
		   }
	   }
       printf("\n");
       
}
}
