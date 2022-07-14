
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    char c[x][y];

    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            cin>>c[i][j];
        }
    }


    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            cout<<c[i][j];
        }
        cout<<endl;
        for(int j=0; j<y; j++)
        {
            cout<<c[i][j];
        }
        cout<<endl;
    }
}


