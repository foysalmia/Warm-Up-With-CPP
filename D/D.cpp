
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[200001];
    cin>>s;
    int len = strlen(s);
    int counter = 0;
    int zth = 0;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='Z')
            zth = i;
    }

    for(int i=0; i<=zth; i++)
    {
        if(s[i] == 'A')
        {
            for(int j=i; j<=zth; j++)
            {
                counter++;
            }
            break;

        }

    }
    cout<<counter<<endl;

}

