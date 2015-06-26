#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int substring(string s)
{
	int len = s.length();
	
	for(int i=0;i<len;i++)
	{
		char cmp = s.at(i);
		
		if(cmp=='m')
		{
			return 1;
		}
	}
	
	return 0;
}

int main()
{
	int t;
	cin>>t;
	cout<<endl;
	int x;
	string a,b,c;
	char ch;
	
	for(int i=0;i<t;i++)	
	{
		cin>>a>>ch>>b>>ch>>c;
		
		int aasInt = 0;
		int basInt = 0;
		int casInt = 0;

     		stringstream ss;
    		ss<<a;
   		ss>>aasInt;
   		
   		stringstream ss2;
    		ss2<<b;
   		ss2>>basInt;
   		
   		stringstream ss3;
    		ss3<<c;
   		ss3>>casInt;
   		
		if(substring(a))
		{
			x = casInt - basInt;
			cout<<x<<" + "<<b<<" = "<<c<<endl;
		}
		
		else if(substring(b))
		{
			x = casInt - aasInt;
			cout<<a<<" + "<<x<<" = "<<c<<endl;
		}
		
		else
		{
			x = aasInt + basInt;
			cout<<a<<" + "<<b<<" = "<<x<<endl;
		}
		
		cout<<endl;
	}	
	
	return 0;
}
