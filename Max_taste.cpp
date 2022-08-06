#include<iostream>
using namespace std;
int main()
{
    int a[4],n;
    cin>>n;
    if (n<=100&&n>=1)
    {
    for (int i = 0; i < n; i++)
    {
    for (int i = 0; i < 4; i++)
    {
        cin>>a[i];
    }
    }
    for (int  i = 0,j = 0; i < n; i++,j++)
    {
        if (a[0]<a[1]&&a[2]<a[3])
        {
            a[j]=a[1]+a[3];
            break;
        }
        else if (a[0]>a[1]&&a[2]<a[3])
        {
            a[j]=a[0]+a[3];
            break;
        }
        else if (a[0]>a[1]&&a[2]>a[3])
        {
            a[j]=a[0]+a[2];
            break;
        }
        else if (a[0]<a[1]&&a[2]>a[3])
        {
            a[j]=a[1]+a[2];
            break;
        }
    }
    for (int j = n; j > 0; j--)
    {
        cout<<a[j]<<endl;
    }
    
    
    }
    return 0;
}
