#include<bits/stdc++.h>

using namespace std;

int factors(int num)
{
	int sum = 0;
	
	if(num==1)
	{
		return 1;
	}
	
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			sum++;
		}
	}
	
	return (sum + 2);
}
int main()
{
	int n;
	cin>>n;
	
	int recs = 0;
	int add;
	
	for(int i=1;i<=n;i++)
	{
		if(factors(i)%2==0)
		{
			add = factors(i)/2;
		}
		
		else if(factors(i)%2!=0)
		{
			add = (factors(i)-1)/2 + 1;
		}
		
		recs = recs + add;
	}
	
	cout<<recs<<endl;
	
	return 0;
}
