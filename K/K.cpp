#include<bits/stdc++.h>
using namespace std;

int main()
{
    int H,W;
    cin>>H>>W;
    string S[H];
    vector<vector<long long>> ans(H,vector<long long>(W,0));
    int x[]= {1,1,0,-1,-1,-1,0,1};
    int y[]= {0,1,1,1,0,-1,-1,-1};
    for(int i=0; i<H; i++)
    {
        cin>>S[i];
        for(int j=0; j<W; j++)
        {
            if(S[i][j]=='#')
            {
                ans[i][j]+=INT_MAX;
                for(int k=0; k<8; k++)
                {
                    if(i+y[k]>=0&&i+y[k]<H&&j+x[k]>=0&&j+x[k]<W)
                    {
                        ans[i+y[k]][j+x[k]]++;
                    }
                }
            }
        }
    }
    for(int i=0; i<H; i++)
    {
        for(int j=0; j<W; j++)
        {
            if(ans[i][j]<INT_MAX)
            {
                cout<<ans[i][j];
            }
            else
            {
                cout<<'#';
            }
        }
        cout<<"\n";
    }

}
