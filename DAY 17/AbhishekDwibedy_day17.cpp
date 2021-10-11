#include <bits/stdc++.h>
using namespace std;

int sumdigitsquare(int n)
{
	int sq = 0;
	while (n) {
		int digit = n % 10;
		sq += digit * digit;
		n = n / 10;
	}
	return sq;
}
bool lucky(int n)
{
	
	set<int> s;
	s.insert(n);
	while (1) {
		if (n == 1)
			return true;


		n = sumdigitsquare(n);
		if (s.find(n) != s.end())
			return false;
		s.insert(n);
	}

	return false;
}

int main()
{
	int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        if (lucky(n))
        {
            cout<<"lucky"<<endl;
        }
        else
        {
            cout<<"unlucky"<<endl;
        }
        
    }
    return 0;
}
