#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,a,b;
    // Taking the number of input from the user
    cin>>n;
    // using while loop to iterate
    while (n--)
    {
        // Taking input a and b
        cin>>a>>b;
        // using c and d for computation
        int c = a%b;
        int d = a/b;
        // comparing values
        if (c==0&&d%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        } 
    }
}
