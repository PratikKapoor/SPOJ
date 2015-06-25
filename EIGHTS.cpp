#include<iostream>
#include<math.h>
#include<iostream>

using namespace std;

int main()
{
    long long int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        long long int k;
        cin>>k;

        long long int number = 192 + 250*(k-1);
        cout<<number<<endl;
    }
}
