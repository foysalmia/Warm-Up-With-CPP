#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,l,r,total = 0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>l>>r;
        for(int j=l;j<=r;j++)
            total++;
    }

    cout<<total<<endl;

}
