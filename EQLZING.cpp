#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n , i ;
    // Taking the number of input from the user
    int n;
    // Taking two arrays 
    int a[n],b[n];
    // Using for loop to iterate
    for (int i = 0; i < n; i++)
    {
        // Taking input from array
        cin>>a[i]>>b[i];
    }
    // Using for loop to iterate
    for (int i = 0; i < n; i++)
    {
        if ((a[i]-b[i])%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    
    
    return 0;
}
