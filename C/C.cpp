
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    if(a==b)
    {
        cout<<"Draw"<<endl;
        return 0;
    }

    if(a == 1 && b != 1)
    {
        cout<<"Alice"<<endl;
        return 0;
    }
    else if(b == 1 && a != 1)
    {
        cout<<"Bob"<<endl;
        return 0;
    }

    if(a>b)
    {
        cout<<"Alice"<<endl;
        return 0;
    }
    else
    {
        cout<<"Bob"<<endl;
        return 0;
    }

}
