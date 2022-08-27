#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,km;
    // Taking the number of input from the user
    cin>>n;
    // using while loop to iterate
    while (n--)
    {
        // taking kilometers input 
        cin>>km;
        cout<<2*km*5<<endl;
    }
    
    return 0;
}
