#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
    
        int ans=0;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i] == s[i-1]){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
    