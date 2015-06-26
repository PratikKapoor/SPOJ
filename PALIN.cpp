#include<iostream>
#include<math.h>

using namespace std;

int rev(int num)
{
	int reverse=0;
	int temp = num;
	
	/*int len=0;
	
	while(temp>0)
	{
		temp = temp/10;
		len++;
	}
	
	len--;
	int i=len;*/
	
	while(num>0)
	{
		reverse = reverse*10 + (num%10);
		num = num/10;
		//i--;
	}
	
	return reverse;
}

int main()
{
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		int k;
		cin>>k;
		k++;
		
		if(k<10)
		{
			cout<<k<<endl;
		}
		
		else
		{	
			while(1)
			{	
				int reverse = rev(k);
				
				if(k==reverse)
				{
					cout<<k<<endl;
					break;
				}
				
				else
				{
					k++;
				}
			}
		}
	}	
	
	return 0;
}
