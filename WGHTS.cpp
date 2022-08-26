#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,w,x,y,z;
    // Taking the number of input from the user
    cin>>n;
    // using while loop to iterate
    while(n--){
        // Taking weights 
        cin>>w>>x>>y>>z;
        // comparing the weights 
        if (w==x||w==y||w==z||w==x+y||w==x+z||w==y+z||w==x+y+z)
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
