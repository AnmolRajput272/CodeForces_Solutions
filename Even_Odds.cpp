#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	unsigned long long n; cin>>n;
	unsigned long long k; cin>>k;
	k<=ceil(n/2.0) ?  cout<<(unsigned long long)((2*k)-1) : cout<<(unsigned long long)(2*(k-ceil(n/2.0)));

}
