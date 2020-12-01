

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pf printf
#define fast
#define Tcase(n) for(int tc=1; tc<=n; tc++)
#define pb push_back
#define read freopen("in.txt","r",stdin);
#define write freopen("out.txt","w",stdout);

int col[30000];
stack<int> ans;
void dfs(int r, vi v[]){
    col[r]=1;
    cout<<r<<" ";
    for(auto i:v[r]){
        if(col[i]==0)
            dfs(i, v);
    }
    ans.push(r);
}
int main(){
    read;
    //write;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //cout.tie(0);
    int t;
    cin>>t;
    Tcase(t){
        int n,m;
        cin>>n>>m;
        vi v[30000];
        for(int i=0; i<n; i++){
            int x,y;
            cin>>x>>y;
            v[x].pb(y);
            //v[y].pb(x);
        }
        cout<<"DFS: ";
        dfs(1, v);
        cout<<endl<<"Topological Sort: ";
        while(!ans.empty()){
            int x = ans.top();
            ans.pop();
            cout<<x<<" ";
        }
    }

    return 0;
}
