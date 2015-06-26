#include<stdio.h>

int max(int num)
{
	if(num==2 || num==3 || num==5 || num==7 || num==11 || num==1 || num==0)
	{
		return num;
	}
	
	return max(num/2) + max(num/3) + max(num/4);
}

int main()
{
	/*n/2, n/3 and n/4
	
	2,3,4,5,7,11 base*/
	long int n;
	
	while(scanf("%lu",&n)!=EOF)
	{
		int a;
		a = max(n);
	
		printf("%d\n",a);
	}
	return 0;
}
