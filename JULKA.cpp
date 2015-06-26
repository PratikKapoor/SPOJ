#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i;
	
	for(i=0;i<10;i++)
	{
		unsigned long long int apples;
		cin>>apples;
		
		unsigned long long int more;
		cin>>more;
		
		unsigned long long int x;
		
		x = (apples - more)/2;
		
		cout<<x+more<<endl<<x<<endl;
	}
	
	return 0;
}
