#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,x,y;
    // Taking the number of input from the user
    cin>>n;
    // using while loop to iterate
    while (n--)
    {
        // taking inputs x as weeks and y as coins
        cin>>x>>y;
        cout<<x*y<<endl;
    }
    
}
