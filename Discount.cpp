#include <iostream>
using namespace std;

int main() {
    int t = 100,n,x;
    cin>>n;
    int d[n];
    for(int i=0,j=0;i<n;i++,j++){
    cin>>d[i];
    x = t-((t/100)*d[i]);
    d[j]=x;
    }
    for(int j =0; j<n;j++){
    cout<<d[j]<<endl;
    }
	return 0;
}