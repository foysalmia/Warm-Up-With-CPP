
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char w[101];
    int arr[26] = {0};
    cin>>w;
    int len = strlen(w);
    for(int i=0; i<=len; i++)
    {
        arr[w[i]-'a'] += 1;
    }
    bool isbeautiful = false;
    for(int i=0; i<26; i++)
    {
        if(arr[i]%2==0)
        {
            isbeautiful = true;
        }
        else
        {
            isbeautiful = false;
            break;
        }
    }

    if(isbeautiful){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}



