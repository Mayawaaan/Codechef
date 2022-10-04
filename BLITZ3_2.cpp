#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,a,b,c;
    // Taking the number of input from the user
    cin>>n;
    // Using while loop to iterate
    while (n--)
    {
        cin>>a>>b>>c;
        cout<<(2*(180+a))-(b+c)<<endl;
        
    }
}
