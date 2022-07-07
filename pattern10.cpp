#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the row number :";
	cin>>n;
	int i,j;
	int cnt=1;
  for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		cnt=i;
		for(j=i;j>=1;j--)
		{
			cout<<cnt;
			cnt++;
		}
	   cnt-=2;
	    for(j=1;j<i;j++)
		{
			cout<<cnt;
			cnt--;
			
		}

		cout<<endl;
	}
	
}
