
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

int col[30000],dist[30000];

void bfs(int r, vi v[]){
    queue<int> q;
    q.push(r);
    dist[r]=0;
    col[r]=1;
    while(!q.empty()){
        int n = q.front(); q.pop();
        cout<<n<<endl;
        for(auto i:v[n])
        {
            if(col[i]==0){
                q.push(i);
                col[i]=1;
            }
        }

    }
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
        int n;
        cin>>n;
        vi v[30000];
        for(int i=0; i<n-1; i++){
            int x,y;
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        bfs(0,v);
        memset(col,0,sizeof(col));
        memset(dist,0,sizeof(dist));
    }

    return 0;
}
