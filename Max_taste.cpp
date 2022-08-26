#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c,d,n;
    // Taking the number of input from the user
    cin>>n;
    // using while loop to iterate
    while(n--){
        cin>>a>>b>>c>>d;
        int x = a>b? a:b;
        int y = c>d? c:d;
        cout<<x+y<<endl;
    }
}
