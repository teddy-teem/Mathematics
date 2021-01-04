#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
int main(){
vi v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
int n = v.size();
int x = (1<<n);
for(int i=0; i<x; i++){
    for(int j=0; j<v.size(); j++){
        if((1<<j)&i)
        {
            cout<<v[j];
        }
    }
    cout<<endl;
}
}
