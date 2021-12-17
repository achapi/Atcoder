/**
  date : 2021年12月11日21時04分09秒
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
    vector<string> s(n);
    rep(i, n){
        cin>>s[i];
    }
    sort(all(s));
    string ans;
    int max=0,a=1;
    rep(i, n){
        if(s[i] == s[i+1]){
            a++;
        }else{
            if(max<a){
                max=a;
                ans=s[i];
            }
            a=1;
        }
    }
    cout<<ans<<endl;
    //code end
    return 0;
}