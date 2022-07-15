#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, x,counter = 0;
    cin >> a >> b >> x;
    while(a>0 && b>0){
        a--;
        b--;
        counter++;
    };
     while(b>0 && x>0){
        b--;
        x--;
        counter++;
    };
     while(a>0 && x>0){
        a--;
        x--;
        counter++;
    }
     while(a>0 && b>0 && x>0){
        a--;
        b--;
        x--;
        counter++;
    }

    if(a==0 && b==0 && x==0){
        cout<<counter<<endl;
    }else{
        cout<<"-1"<<endl;
    }
    return 0;
}

