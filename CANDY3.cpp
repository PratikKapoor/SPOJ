#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		cout<<endl;
		
		long long int n;
		cin>>n;
		
		long long int x;
		long long int sum = 0;
		
		for(int j=0;j<n;j++)
		{
			cin>>x;
			sum = (sum + x)%n;
		}
		
		if(sum)
		{
			cout<<"YES\n";
		}
		
		else
		{
			cout<<"NO\n";
		}
	}
	
	return 0;
}
