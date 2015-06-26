#include<iostream>
#include<string.h>

int dp[5010];

using namespace std;

int main()
{
	char input[5010];
	
	dp[0] = 1;
	dp[1] = 1;
	
	while(1)
	{
		int j=2;
		std::ios::sync_with_stdio(false);
		cin>>input;
		
		if(input[0] == '0')
		{
			break;
		}
		
		int len = strlen(input);
		
		for(int i=1;i<=len;i++)
		{	
			int last = int(input[i-1]-48);
			int now = int(input[i]-48);
			int next = int(input[i+1]-48);
			
			if(last>2)
			{
				dp[j] = dp[j-1];
				j++;
			}
			
			else if(last==2 && now>6)
			{
				dp[j] = dp[j-1];
				j++;
			}
			
			else if(now<=2 && next==0)
			{
				dp[j] = dp[j-1];
				j++;
			}
			
			else if(now==0 || last==0)
			{
				dp[j] = dp[j-1];
				j++;
			}
			
			else
			{
				dp[j] = dp[j-1] + dp[j-2];
				j++;
				
			}
		}
		
		cout<<dp[len]<<endl;
		
	}
	
	return 0;
}
