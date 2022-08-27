#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,a,b;
    // Taking the number of input from the user
    cin>>n;
    // using while loop to iterate
    while (n--)
    {
        cin>>a>>b;
        cout<<(a/10)*b<<endl;
    }
    
    return 0;
}
