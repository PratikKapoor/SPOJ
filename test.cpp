#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int reverse=0;
	int num;
	cin>>num;
	int temp = num;
	
	int len=0;
	
	while(temp>0)
	{
		temp = temp/10;
		len++;
	}
	len--;
	int i=len;
	
	while(num>0)
	{
		reverse = reverse + (num%10)*pow(10,i);
		num = num/10;
		i--;
	}
	
	cout<<reverse<<endl;
	return 0;
}
