#include<iostream>

using namespace std;

int largest(int array[],int len)
{
	int largest = 0;
	int pos;
	
	for(int i=0;i<len;i++)
	{
		if(array[i]>largest)
		{
			largest = array[i];
			pos = i;
		}
	}
	
	array[pos] = 0;
	return largest;
}

int main()
{	
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		int ntb, friends;
		cin>>ntb>>friends;
		
		int array[1000];
	
		for(int j=0;j<friends;j++)
		{
			cin>>array[j];
		}
		
		int count = 0;
		int sum  =0;
		int flag = 0;
		
		while(1)
		{

			if(sum>=ntb)
			{
				break;
			}
			
			if(count>friends)
			{
				flag = 1;
				break;
			}
			
			sum = sum + largest(array,friends);
			count++;
			
		}
		
		cout<<"Scenario #"<<i+1<<":"<<endl;
		
		if(flag == 1)
		{
			cout<<"impossible"<<endl;
		}
		
		else
		{
			cout<<count<<endl;

		}
	}

	return 0;
}
