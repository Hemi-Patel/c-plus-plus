//question-6

#include<iostream>
using namespace std;

main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		for(k=5;k>i;k--)
		{
			cout<<"  ";
		}
		for(j=i;j>=1;j--)
		{
			cout<<j;
		}

		cout<<endl;
	}
	
}
