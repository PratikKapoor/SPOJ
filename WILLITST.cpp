#include<iostream>

using namespace std;

int main()
{
    unsigned long long int n;
    cin>>n;

    if(n==0 || n==1)
    {
        cout<<"TAK"<<endl;
    }

    else
    {
        while(n%2==0)
        {
            n = n/2;
        }

        if(n==1)
        {
            cout<<"TAK"<<endl;
        }

        else
        {
            cout<<"NIE"<<endl;
        }
    }

    return 0;
}
