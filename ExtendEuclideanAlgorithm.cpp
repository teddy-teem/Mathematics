#include<bits/stdc++.h>
using namespace std;
int   EEA(int a, int b, int &x, int &y){
    if(b==0){
        x=1;
        y=0;
        //cout<<a<<" "<<b<<endl;
        return a;
    }
    int x1, y1;
    int d = EEA(b, a%b, x1, y1);
    x=y1;
    y = x1-(a/b)*y1;
    //cout<<a<<" "<<b<<endl;
    return d;
}
int main(){
    int x,y;
     EEA(4,7,x,y);    ///4x+7y=1
    cout<<x<<endl;
}
