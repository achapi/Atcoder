/**
  date : 2021年12月25日21時13分54秒
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
    int a,b,c=0;cin>>a>>b;
    a--;b--;
    string s;cin>>s;
    rep(i, s.size()){
        if(i<a||b<i)cout<<s[i];
        else {
            cout<<s[b-c];
            c++;
        }
    }
    //code end
    return 0;
}