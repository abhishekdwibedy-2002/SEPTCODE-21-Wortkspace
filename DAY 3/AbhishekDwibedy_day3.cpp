#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str ;
    cin>>str;
	vector<int> v;
	stringstream ss(str);
	for (int i; ss >> i;) {
		v.push_back(i);
		if (ss.peek() == ',')
			ss.ignore();
	}
	for (size_t i = 0; i < v.size(); i++)
		cout << v[i] << endl;
}
