/**
  date : 2022年02月01日20時05分12秒
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
    string s,t;cin>>s>>t;
    int ans=0,ans2=0;
    int j=0;
    int savej,breakflag;
    rep(i, s.size()){
        breakflag=0;
        for(;j<t.size();j++){
            if(s[i]!=t[j]){
                ans++;
                j++;
                savej=j;
                breakflag=1;
                break;
            }
        }
        if(breakflag==0)j=savej;
    }
    j=0;
    swap(s,t);
    rep(i, s.size()){
        breakflag=0;
        for(;j<t.size();j++){
            if(s[i]!=t[j]){
                ans++;
                j++;
                savej=j;
                breakflag=1;
                break;
            }
        }
        if(breakflag==0)j=savej;
    }
    cout<<max(ans,ans2);
    //code end
    return 0;
}