#include<stdio.h>
int main()
{
  int n,i,j;
  printf("Enter the value of n:");
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
	else
	{
	  for(j=0;j<n;j++)
	  {
	  	if(j==0 || j==n-1)
	  	{
	  		printf("*");
		  }
		  else
		  {
		  	printf(" ");
		  }
	  }	
	}	
	printf("\n");
  }	
}
