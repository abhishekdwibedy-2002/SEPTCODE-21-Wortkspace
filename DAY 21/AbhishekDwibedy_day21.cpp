#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int bits = 0;
		for (int i = 0; i < 32; ++i)
		{
			if (n & (1 << i))
				bits++;
		}
		cout << bits << endl;
    }
    return 0;

}
