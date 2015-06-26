#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	
	long int series[1000000];
	series[1] = 1;
	
	int a = 1;
	
	for(int j=2;j<1000000;j++)
	{
		series[j] = series[j-1] + a;
		a++;
	}
	
	for(int k=0;k<t;k++)
	{
		int num;
		cin>>num;
		
		int nearest, relative;
		int numerator, den;
		
		if(num==1)
		{
			numerator = 1;
			den = 1;
		}
		
		else
		{
			for(int i=1;i<1000000;i++)
			{
				if(series[i]>num)
				{
					nearest = i-1;
					relative = num - series[i-1];
					break;
				}
			}
			
			if(nearest%2==0)
			{
				numerator = 1;
				den = nearest;
			
				numerator = numerator + relative;
				den = den - relative;
			}
		
			else
			{
				numerator = nearest;
				den = 1;
			
				den = den + relative;
				numerator = numerator - relative;
			}
		}
		
		cout<<"TERM "<<num<<" IS "<<numerator<<"/"<<den<<endl;
		
	}
	
	return 0;
}
