
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
string mul(string s, string t){
    string result="0",a;
    int sm=t.size(),big=s.size(),cr=0;
    if(big<sm){
        swap(big,sm);
        swap(s,t);
    }

    vector<int> v,w,x;
    stringToint(v,s);
    stringToint(w,t);
    int l=0;
    for(int i=sm-1; i>=0; i--){
        for(int j=big-1; j>=0; j--){
            cr+=v[j]*w[i];
            x.pb(cr%10);
            cr/=10;
        }
        if(cr!=0)
            x.pb(cr);
        reverse(x.begin(), x.end());
        intTostring(a,x);
        x.clear();
        string tm;
        for(int k=0; k<l; k++)
            a+='0';
        result=add(a,result);
        a.clear();
        l++;
    }
    return result;
}
int main(){
    cout<<"\n"<<mul("5","5")<<endl;
    cout<<"\n"<<mul("10","11")<<endl;
}

