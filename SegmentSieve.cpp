
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mem(a,v) memset(a,v,sizeof(a));

using namespace std;
vector<int> v,prm;
bool ch[1000000];  ///10^6
void sieve(){
    for(int i=3; i*i<=1000000; i+=2){
        if(ch[i]==0){
            for(int j=i*i; j<=1000000; j+=i){
                ch[j]=1;
            }
        }
    }
    v.pb(2);
    for(int i=3; i<1000000; i+=2){
        if(ch[i]==0)
            v.pb(i);
    }

}
void segment_sieve(ll l, ll r){
    bool ok[r-l+1];
    mem(ok,1);
    for(int i=0; v[i]*v[i]<=r; i++){
        int cr_p = v[i];
        ll base = ((l/cr_p)*cr_p);
        if(base<l)
            base+=cr_p;
        for(ll j=base; j<=r; j+=cr_p){
            ok[j-l]=0;
        }
        if(base=cr_p)
            ok[base-l]=1;
    }
    for(int i=0; i<r-l+1; i++){
        if(ok[i]==1)
        {
            prm.pb(i+l);
        }
    }
}
int main(){
    sieve();
    segment_sieve(2,7);
    for(auto i:prm)
        cout<<i<<" ";


}
