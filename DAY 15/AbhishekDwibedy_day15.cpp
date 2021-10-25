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
	int sum = (n) * (n + 1) / 2;
	int res = 0;
	unordered_map<int, int> m;
	for (int i = 0; i < n; ++i)
	{
		int roll ; cin >> roll;
		if (m[roll] == 0) {
			m[roll]++;
			res += roll;
		}
	}
	cout << sum - res << endl;
}

int main()
{
	// clock_t begin = clock();
	/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	*/
	fastio;
	ll n = 1;
	cin >> n;

	while (n--)
	{
		solve();
	}
	// #ifndef ONLINE_JUDGE
	//     clock_t end = clock();
	//     cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
	// #endif
	return 0;
}
