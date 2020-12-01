
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mem(a,v) memset(a,v,sizeof(a));

using namespace std;
ll bigMod(ll b, ll pw, ll M){
    if(pw==0)
        return 1;
    if(pw%2==0){
        ll val=bigMod(b,pw/2,M);
        return (val*val)%M;
    }
    else{
        ll x, y;
        x=b%M;
        y=bigMod(b,pw-1,M);
        return (x*y)%M;
    }
}
int main(){
    cout<<bigMod(100000,100000,15)<<endl;
}
