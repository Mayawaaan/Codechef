#include <iostream>
using namespace std;

int main() {
    int t = 100,n,x;
    // Taking the number of input from the user
    cin>>n;
    // Taking an array
    int d[n];
    // using for loop to iterate 
    for(int i=0,j=0;i<n;i++,j++)
    {
        // Taking inputs in array
        cin>>d[i];
        x = t-((t/100)*d[i]);
        d[j]=x;
    }
    // using for loop to iterate
    for(int j =0; j<n;j++)
    {
        // Taking output from an array
        cout<<d[j]<<endl;
    }
}