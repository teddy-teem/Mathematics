#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mem(a,v) memset(a,v,sizeof(a));

using namespace std;
vector<int> v;
bool ch[100000];  ///10^5
void sieve(){
    for(int i=3; i*i<=100000; i+=2){
        if(ch[i]==0){
            for(int j=2*i; j<=100000; j+=i){
                ch[j]=1;
            }
        }
    }
    v.pb(2);
    for(int i=3; i<100000; i+=2){
        if(ch[i]==0)
            v.pb(i);
    }

}
int main(){
    sieve();
    for(auto i:v)
        cout<<i<<" ";
}
