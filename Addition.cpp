

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define stringToint(v,s) for(int i=0; i<s.size(); i++) v.pb(s[i]-'0');
#define intTostring(a,x) for(int i=0; i<x.size(); i++) a+=x[i]+'0';
#define mem(a,v) memset(a,v,sizeof(a));

using namespace std;
string add(string s, string t){
    int cr=0,j;
    string ans;
    vector<int> v,w,x;
    stringToint(v,s);
    stringToint(w,t);
    if(v.size()<w.size()) swap(v,w);
    j=w.size()-1;
    for(int i=v.size()-1; i>=0; i--){
        if(j!=-1)
            cr+=v[i]+w[j--];
        else
            cr+=v[i];
        x.pb(cr%10);
        cr/=10;
    }
    if(cr!=0) x.pb(cr);
    intTostring(ans,x);
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    cout<<add("1", "1")<<endl;
}
