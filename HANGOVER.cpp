#include<iostream>

using namespace std;

int main()
{
    float array[300];

    for(int i=1;i<278;i++)
    {
        float sum = 0;

        for(int j=2;j<=i+1;j++)
        {
            sum = sum + (float)1/(float)j;
        }

        array[i] = sum;
    }

    while(1)
    {
        float k;
        cin>>k;

        if(k==0.0)
        {
            break;
        }

        if(k<=0.5)
        {
            cout<<"1 card(s)"<<endl;

        }

        else
        {
                for(int i=2;i<=277;i++)
                {
                    if(array[i]>=k)
                    {
                        cout<<(i)<<" card(s)"<<endl;
                        break;
                    }
                }
        }

    }
}
