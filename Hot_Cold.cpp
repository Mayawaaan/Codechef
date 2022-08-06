#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    if (n<=50&&n>=1)
    {
        
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n ; i++)
    {
        if (a[i]<=40&&a[i]>=0)
        {    
        if(a[i]<=20){
            cout<<"COLD"<<endl;
        }
        else{
            cout<<"HOT"<<endl;
        }
        }
    }
    }
       
    return 0;
}
