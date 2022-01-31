/**
  date : 2022年01月10日18時24分15秒
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
    int n;string s;cin>>n>>s;
    vector<bool> a(5, false);
    rep(i, n){
        if(s[i]=='A')a[0]=true;
        if(s[i]=='B')a[1]=true;
        if(s[i]=='C')a[2]=true;
        if(s[i]=='D')a[3]=true;
        if(s[i]=='E')a[4]=true;
        int d = 0;
        rep(j, 5){
            if(a[j])d++;
        }
        if(d>=3){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    //code end
    return 0;
}