#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,t;
    // Taking the number of input from the user
    cin>>t;
    // Using while loop to iterate 
    while (t--)
    {
        int n=0;
        cin>>a;
        // using for loop to check how many 4's are there
        for (int i = 0; i < 10; i++)
        {
            if (a != 0)
            {
                if (a%10==4)
                {
                    n++;
                    a=a/10;
                }
                else
                {
                    a=a/10;
                }
            }
            if (a == 0)
            {
                break;
            }
        }
        // Taking the ouput
         cout<<n<<endl;
    }
}
