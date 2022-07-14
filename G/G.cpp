
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,x,result = 0,i;
    cin>>a>>b>>x;

    for(i = a; i<= b; i++){
        if(i%x == 0){
            result++;
        }
    }

    cout<<result<<endl;
}
