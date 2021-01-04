///Time Complexity is O(n*n!)
#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
void permute(vi a, int l, int r){
if(l==r){
    for(auto i:a)
        cout<<i;
    cout<<endl;
}
else{
    for(int i=l; i<=r; i++){
        swap(a[i], a[l]);
        permute(a,l+1,r);
    }
}
}

int main(){
    vi v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    permute(v,0,v.size()-1);

}
