#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		int a,b;
		cin>>a;
		cin>>b;
		
		unsigned long long int x = pow(a,b);
		
		cout<<x%10<<endl;
	}
	
	return 0;
}
