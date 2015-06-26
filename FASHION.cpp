#include<bits/stdc++.h>

int main()
{
	int t, i, j;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		int n;
		scanf("%d",&n);
		
		int men[n];
		int women[n];
		
		
		for(j=0;j<n;j++)
		{
			scanf("%d",&men[j]);
		}
		
		for(j=0;j<n;j++)
		{
			scanf("%d",&women[j]);
		}
		
		std::sort(men,men+n);
		std::sort(women,women+n);
		
		int sum = 0;
		
		for(j=0;j<n;j++)
		{
			sum = sum + men[j]*women[j];
		}
		
		printf("%d\n",sum);	
	}

	return 0;	
}
