#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
    cin>>t;
    for (int j = 0; j < t; j++)
    {
    
        int n;
        cin>>n; 
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int val;
		    cin >> val;
		    vec.push_back(val);
        }
        bool ctr = true;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] == vec[i-1])
            {
                cout<<"Gentle"<<endl;
                ctr=false;
                break;
            }
            
        }
        if (ctr)
        {
            cout<<"Steep"<<endl;
        }
        
    }   
    return 0;
}