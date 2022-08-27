#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,x,y,a;
    // Taking the number of input from the user
    cin>>n;
    // Using while loop to iterate
    while (n--)
    {
        // Taking age inputs
        cin>>x>>y>>a;
        if (20<=x&&x<y&&y<=40)
        {
            if (x<=a&&a<y)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }     
        }
    }
}
