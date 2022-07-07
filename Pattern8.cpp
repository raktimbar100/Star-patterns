#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter row and column number  :"<<endl;
	cin>>r>>c;
	int i,j;
	int cont=1;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<cont<<" ";
			cont++;
		}
		cout<<endl;
	}
	return 0;
}
