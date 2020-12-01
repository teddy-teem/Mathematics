#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define stringToint(v,s) for(int i=0; i<s.size(); i++) v.pb(s[i]-'0');
#define intTostring(a,x) for(int i=0; i<x.size(); i++) a+=x[i]+'0';
#define mem(a,v) memset(a,v,sizeof(a));

using namespace std;
string ans,m;
bool isSmall(string s, string t){
    if(s.size()<t.size()) return 1;
    else if(s.size()>t.size()) return 0;
    else{
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]>t[i]) return 0;
            if(s[i]<t[i]) return 1;
        }
        return 0;
    }
}
string sub(string s, string t){
    if(isSmall(s,t)) swap(s,t);
    int n=t.size();
    for(int i=n; i<s.size(); i++)
        m+=('0');
    m+=t;
    t=m;
    vector<int> v,w,x;
    stringToint(v,s);
    stringToint(w,t);

    int j=w.size()-1;
    for(int i=v.size()-1; i>=0; i--){
        if(v[i]>=w[j])
            x.pb(v[i]-w[j--]);
        else{
            x.pb(v[i]+10-w[j--]);
            w[j]+=1;
        }
    }
    intTostring(ans,x);
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    cout<<sub("5698754","12457898754")<<endl;
}

