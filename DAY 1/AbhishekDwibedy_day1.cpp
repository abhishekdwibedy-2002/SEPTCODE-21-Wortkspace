#include<iostream>
using namespace std;

int equationresults(int a , int b , int c)
{
    int results;
    results = a+b*c/a-b;
    return results;
}




int main() {
    int n;
    //cout<<"Enter the number of players"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        int x,y,z;
        cin>>x>>y>>z;
        int res;
        res=equationresults(x,y,z);
        cout<<res<<endl;

    }
}   