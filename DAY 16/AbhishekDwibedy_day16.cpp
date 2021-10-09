#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define mod 1000000007
#define inf 1e18
#define endl "\n"
#define pb emplace_back
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll, ll>
#define ump unordered_map
#define mp map
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll, vi, greater<ll>>
#define ff first
#define ss second
#define mid(l, r) (l + (r - l) / 2)
#define loop(i, a, b) for (int i = (a); i <= (b); i++)
#define looprev(i, a, b) for (int i = (a); i >= (b); i--)
#define all(n) n.begin(), n.end()
#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)


void solve()
{
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		int val;
		cin >> val;
		v.push_back(val);
	}
    int even =0;
    int odd=0;
    int p =0;
    int p1=0;
	for (int i = 0; i < n; ++i)
	{
        if (v[i] % 2 ==0)
        {
            even++;
            p=i+1;
        }
        else
        {
            odd++;
            p1=i+1;
        }
        

	}
	if (even == 1)
    {
        cout<<p<<endl;
    }
    else
    {
        cout<<p1<<endl;
    }
}

int main()
{
	fastio;
	ll n = 1;
	cin >> n;

	while (n--)
	{
		solve();
	}
	return 0;
}
