#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,a,b;
    // Taking the number of input from the user
    cin>>n;
    cin>>n;
    // using while loop to iterate
    while (n--)
    {
        // taking a as patties and b as buns 
        cin>>a>>b;
        if (a>b)
        {
            cout<<b<<endl;
        }
        else if(b>a)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<(a+b)/2<<endl;
        }
        
        
    }
}
