#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
	// Taking the number of input from the user
	cin>>n;
	// using for loop to iterate
	for (int i=0; i<n; i++) {
		// Read the input a, b
		int a,b;
		cin>>a>>b;
		// Compute the ans.
		int ans = a + b;
		cout<<ans<<endl;
	}
}
