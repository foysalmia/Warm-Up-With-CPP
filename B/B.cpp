#include<bits/stdc++.h>

using namespace std;

int main()
{

    int a,b;
    cin>>a>>b;

    int result = a+b>23 ? a+b-24 : a+b ;

    cout<<result<<endl;
}
