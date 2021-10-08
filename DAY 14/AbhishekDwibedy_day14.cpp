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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin>>val;
            v.push_back(val);
        }
        int max=0;
        int position=0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > max)
            {
                max = v[i];
                position=i+1;
            }
            
        }
        cout<<position<<endl;
        
    }
    
}
