#include<iostream>

using namespace std;

int main()
{
    while(1)
    {
        int n;
        cin>>n;

        if(n==0)
        {
            break;
        }

        int list[100000];
        int output[100000];

        for(int i=0;i<n;i++)
        {
            cin>>list[i];
        }

        for(int i=0;i<n;i++)
        {
            output[list[i]-1]=i+1;
        }

        int flag = 1;

        for(int i=0;i<n;i++)
        {
            if(output[i]!=list[i])
            {
                flag = 0;
                break;
            }
        }

        if(flag==0)
        {
            cout<<"not ambiguous"<<endl;
        }

        else
        {
            cout<<"ambiguous"<<endl;
        }
    }

    return 0;
}
