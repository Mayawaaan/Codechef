#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n ,a,b,c;
    // Taking the number of input from the user
    cin>>n;
    // using while loop to iterate
    while (n--)
    {
        // Taking marks got in the test
        cin>>a>>b>>c;
        // Comparing marks to compute whether pass or fail
        if ((a+b)/2>=35 && (a+c)/2>=35 && (b+c)/2>=35)
        {
            cout<<"Pass"<<endl;
        }
        else
        {
            cout<<"Fail"<<endl;
        }
        
        
    }
    
    return 0;
}
