#include<iostream>
using namespace std;

int daysum(int x) {
    int c =0;
    if (x % 4 == 0) {
		if (x % 100 == 0) {
			if (x % 400 == 0) {
				c += 366;
			}
			else
				c += 365;
		}
		else
			c += 366;
	}
	else
		c += 365;
	return c;
}

int main() {
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        int a,b;
        cin>>a>>b;
        int sum;
        sum = daysum(a) + daysum(b);
        cout<<sum<<endl;
    }
}