#include<iostream>
using namespace std;

int gradingplayer(int point) {
        if (point < 33)
        {
            /* code */
        }
        else
        {
            int  d = point % 5;
            if (d>2)
            {
                point += 5-d;
            }            
        }        
    return point;
}

int main() {
    int n;
    cin>>n;
    for (int a = 1; a <= n; a++)
    {
        int i;
        cin>>i;
        int res;
        res = gradingplayer(i);
        cout<<res<<endl;
    }

}