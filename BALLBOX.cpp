#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t,n,k;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        if (n<k||k<=0||n<=0)
        {
            cout<<"NO"<<endl;
        }
        else if (k==n&&k>1&&n>1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
        
    }
    
}