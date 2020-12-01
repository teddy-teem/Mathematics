


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
int indegre[30005];
void TopoSort(vi v[],int m){
    multiset<int> q;   ///multiset<int> Used for Lexicographically sort of Topological sort, we can use set/queue also
    vi order;
    int r;
    for(int i=1; i<=m; i++)
        if(indegre[i]==0)
           q.insert(i);
    while(!q.empty()){
        int x = *q.begin();
        q.erase(q.begin());
        order.pb(x);
        for(auto i: v[x]){
            indegre[i]--;
            if(indegre[i]==0){
                q.insert(i);
            }
        }
    }
    for(auto i:order)
        cout<<i<<" ";
}

int main(){
   // read;
    //write;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
        int n,m;
        cin>>n>>m;
        vi v[30000];
        for(int i=0; i<m; i++){
            int x,y;
            cin>>x>>y;
            v[x].pb(y);
            indegre[y]++;
        }

        TopoSort(v,n);


    return 0;
}
