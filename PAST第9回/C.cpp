/**
  date : 2022年01月31日23時46分04秒
  author : achapi
*/
#include <bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
using namespace std;
typedef long long ll;

#define endl '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main() {
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(false);
    //code start
    int n;cin>>n;
    vector<bool> a(6,false);
    vector<int> ans(6); 
    rep(i, n){
        string p,v;cin>>p>>v;
        
        if(p=="A"&&v=="AC"&&!a[0]){
            a[0]=true;
            ans[0]=i+1;
        }
        if(p=="B"&&v=="AC"&&!a[1]){
            a[1]=true;
            ans[1]=i+1;
        }
        if(p=="C"&&v=="AC"&&!a[2]){
            a[2]=true;
            ans[2]=i+1;
        }
        if(p=="D"&&v=="AC"&&!a[3]){
            a[3]=true;
            ans[3]=i+1;
        }
        if(p=="E"&&v=="AC"&&!a[4]){
            a[4]=true;
            ans[4]=i+1;
        }
        if(p=="F"&&v=="AC"&&!a[5]){
            a[5]=true;
            ans[5]=i+1;
        }
    }
    rep(i, 6){
        cout<<ans[i]<<endl;
    }
    //code end
    return 0;
}