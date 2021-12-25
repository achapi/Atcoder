/**
  date : 2021年12月22日00時41分46秒
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
    string s;
    unordered_set<string> a;
    rep(i, n){
        cin>>s;
        if(a.insert(s).second)cout<<(i+1)<<endl;
    }
    //code end
    return 0;
}