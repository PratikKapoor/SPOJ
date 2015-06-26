#include<stdio.h>

int main()
{
	int n, i;

	while(1)
	{
		int sum = 0;
		int moves = 0;
		
		scanf("%d",&n);
		
		if(n==-1)
		{
			break;
		}
		
		int array[n];
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&array[i]);
			sum = sum + array[i];
		}
		
		double same = (double)sum/(double)n;
		
		if(same-(int)same!=0)
		{
			printf("-1\n");
		}
		
		else
		{
			for(i=0;i<n;i++)
			{
				if(array[i]<same)
				{
					moves = moves + same - array[i];
				}
			}
			
			printf("%d\n",moves);
		}
		
	}
	
	return 0;
}
