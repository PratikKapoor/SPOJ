#include<bits/stdc++.h>

map<int,int> memoize = create_map();
	
memoize[2] = 2;
memoize[3] = 3;
memoize[5] = 5;
memoize[7] = 7;
memoize[1] = 1;
memoize[0] = 0;
memoize[11] = 11;

int max(int num)
{
	if(memoize[num]!=0 || num==0)
	{
		return memoize[num];
	}
	
	else
	{
		return max(num/2) + max(num/3) + max(num/4);
	}
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
		memoize[n] = a;
		
		printf("%d\n",a);
	}
	return 0;
}
