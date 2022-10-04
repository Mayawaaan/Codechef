#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    long long n,a,b=0,t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        if (n%2==0)
        {
            cout<<n*n/2<<endl;
        }
        else if(n%2!=0)
        {
            cout<<(((n+1)/2)*(n-1)/2)*2<<endl;
        }
    }  
}
