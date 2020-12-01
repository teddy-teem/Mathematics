#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mem(a,v) memset(a,v,sizeof(a));

using namespace std;
vector<int> v,prm;
bool ch[1000000];  ///10^6
map<int, int> m;
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
void PrmFact(int n){
    int i=0;
    while(v[i]*v[i]<=n){
        if(n%v[i]==0){
            n/=v[i];
            m[v[i]]++;
        }
        else{
            i++;
        }
    }
    m[n]++;

}
int main(){
    sieve();
    PrmFact(10254785);
    for(auto i:m)
        cout<<i.first<<"^"<<i.second<<endl;



}
