
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x = 0,n;
    cin>>n;
    int arr[n];
    char s;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(s == 'I')
        {
            x++;
            arr[i] = x;
        }
        else
        {
            x--;
            arr[i] = x;
        }
    }

    int m = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>m)
            m = arr[i];
    }

    if(m<0)
    {
        m=0;
    }

    cout<<m<<endl;

}


