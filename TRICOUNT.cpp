#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		unsigned long long int n, sum;
		cin>>n;
		
		sum = (n*(n+2)*(2*n+1))/8;

		cout<<sum<<endl;
	}
	
	return 0;
}
/*
int main()
{
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int sum = 0;
		
		for(int j=n;j>1;j--)
		{
			for(int k=j;k>1;k--)
			{
				sum = sum + j-k+1;
				
				if(j>=4 && k>=2)
				{
					sum = sum + j-k-1;
				}
			}	
		}
		
		sum = sum + n*n;
		
		cout<<sum<<endl;
	}
	
	return 0;
}*/
