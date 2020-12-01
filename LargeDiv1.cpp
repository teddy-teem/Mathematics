#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mem(a,v) memset(a,v,sizeof(a));

///if number is string and divisor is integer

using namespace std;
string ans;
ll temp;
string divide(string s, ll n){
    temp=s[0]-'0';
    ll i=0;
    while(temp<n){
        temp=(temp*10)+(s[++i]-'0');
    }
    while(i<s.size()){
         ans += (temp / n) + '0'; ;
         temp = (temp % n) * 10 + s[++i] - '0';
    }
    if(ans.size()==0)
        return "0";
    return ans;
}
int main(){
    cout<<divide("102", 5)<<endl;
}
