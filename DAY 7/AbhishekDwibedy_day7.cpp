#include<bits/stdc++.h>
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


int main() {    
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    long long int n =1;
    cin>>n;
    while (n--)
    {
        int len;
        cin>>len;
        string s;
        cin>>s;
        int cur =1, maxi=0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == s[i-1])
            {
                cur++;
                maxi = max(maxi,cur);
            }
            else
            {
                maxi = max(maxi,cur);
                cur = 1;;
            }
        }
        if (maxi >= 6)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}