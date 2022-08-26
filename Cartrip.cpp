#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,km;
    // Taking the number of input from the user
    cin>>n;
    // using while loop to iterate
    while(n--){
        // taking input of kilometer
        cin>>km;
        // Computing the final value user has to pay for the car
        if (km<=300)
        {
            cout<<300*10<<endl;
        }
        else
        {
            cout<<km*10<<endl;
        }  
    }
}
