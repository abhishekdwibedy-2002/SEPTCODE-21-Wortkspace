#include<iostream>
using namespace std;

int main() {
    int t,a;
    cin>>t;
    int sub[t];
    for ( a = 0; a < t; a++)
    {
        int n, j, i,matrix[100][100];
        cin >> n;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                    cin>>matrix[i][j];
                }
        }
        int row =0,col=0;
        for (i = 0; i < n; i++)
        {
            row = row + matrix[0][i] + matrix[n-1][i];
        }
        for (j = 0; j < n; j++)
        {
            col = col + matrix[j][0] + matrix[j][n-1];
        }
        int sum = abs(row - col);
        cout<<sum<<endl;
    }
}