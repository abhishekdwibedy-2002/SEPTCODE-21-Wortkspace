#include <bits/stdc++.h>
using namespace std;

int maxPrimes(int n)
{
	return n / 2;
}

void PrimeSum(int n)
{
    if (n%2 ==1)
    {
        cout<<"3 ";
        n -=3;
    }
    while (n) {
		cout << "2 ";
		n -= 2;
	}
}


int main()
{
	int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        cout<<maxPrimes(n)<<endl;
        PrimeSum(n);
        cout<<endl;
    }
    return 0;

}
