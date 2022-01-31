/**
  date : 2022年01月08日21時38分43秒
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
    vector<int> a;
    ll k;cin>>k;
    while(k!=0){
        a.push_back(k%2);
        k/=2;
    }
    rep(i, a.size()){
        if(a[a.size()-i-1]==0)cout<<"0";
        else cout<<"2";
    }
    //code end
    return 0;
}