#include<stdio.h>

int even(int num)
{
	if(num%2!=0)
	{
		return 0;
	}
	
	else
	{
		return 1;
	}
}

int main()
{
	int n,x,y,num,i;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&x,&y);
		
		
		if(!(x==y || x==y+2))
		{
			printf("No Number\n");
		}
		
		else if(even(y) && x==y)
		{
			num = 2*y;
			printf("%d\n",num);
		}
		
		else if(even(y) && x!=y)
		{
			num = 2*y+2;
			printf("%d\n",num);
		}
		
		else if(!even(y) && x!=y)
		{
			num = 2*y+1;
			printf("%d\n",num);
		}
		
		else if(!even(y) && x==y)
		{
			num = 2*y-1;
			printf("%d\n",num);
		}
	}
	
	return 0;
}
