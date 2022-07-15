#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,l;
    string s[101];
    cin>>n>>l;
    for(int i=1; i<=n; i++)
    {
        cin>>s[i];
    }
    sort(s+1,s+1+n);
    for(int i=1; i<=n; i++)
    {
        cout<<s[i];
    }
}
