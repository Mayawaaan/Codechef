#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int t,n,a,b;
  cin>>t;
  while (t--)
  {
    cin>>n;
    for (int i = 0; i < n ; i++)
    {
      cin>>a>>b;
    }
  for (int i = 0; i < n; i++)
  {
    if (a>b)
    {
      cout<<a-b<<endl;
    }
    else if (a==b)
    {
      cout<<0<<endl;
    }
    
    else
    {
      cout<<b-a<<endl;
    }
    
    
  }  
  }
  
  
  
  
}