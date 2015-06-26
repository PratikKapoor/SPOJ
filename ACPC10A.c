#include<stdio.h>

int main()
{
	int a,b,c;
	
	while(1)
	{
		scanf("%d %d %d",&a,&b,&c);
		
		if(a==0 && b==0 && c==0)
		{
			break;
		}
		
		if(b-a == c-b)
		{
			int v = b-a;
			printf("AP %d\n",c+v);
		}
		
		else if(b/a == c/b)
		{
			int v = b/a;
			printf("GP %d\n",c*v);
		}
	}
	
	return 0;
}
