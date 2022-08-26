#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   
    // using float to get decimal value 
    float n,a,b,c;
    // Taking the number of input from the user
    cin>>n;
    // using while loop to iterate
    while (n--)
    {
        cin>>a>>b>>c;
        // comparing whether Average is greater than c or not  
        if ((a+b)/2>c)
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
