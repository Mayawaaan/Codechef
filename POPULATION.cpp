#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,x,y,z;
    // Taking the number of input from the user
    cin>>n;
    // using while loop to iterate
    while (n--)
    {
        cin>>x>>y>>z;
        if (x>=y)
        {
           cout<<(x-y)+z<<endl; 
        }
        else
        {
            break;
        }     
    }
}
