#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
    
        char s[101],u=0,l=0;
        cin>>s;
        for(int i=0;i<strlen(s);i++){
            if(s[i]>=97 && s[i]<=122){
            l++;
            }
            else if(s[i]>=65 && s[i]<=90){
                u++;
            }
        }
        if(u>l){
            for(int i=0;i<strlen(s);i++){
                if(s[i]>=97 && s[i]<=122){
                    s[i]=65+s[i]-97;
                }
            }
        }
        else{
            for(int i=0;i<strlen(s);i++){
                if(s[i]>=65 && s[i]<=90){
                    s[i]=97+s[i]-65;
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
       