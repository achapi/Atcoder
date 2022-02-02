/**
  date : 2022年02月01日00時21分33秒
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
    string n;cin>>n;
    int ans=500;
    for(int i=1;i<n.size();i++){
        int a=(n[i-1]-'0');
        int a2=0;
        if(0<a&&a<6){
            a2++;
        }
        int b=(n[i]-'0');
        int b2=0;
        if(0<b&&b<6){
            b2++;
        }
        if(a==b)ans+=301;
        else if(a2==b2){
            ans+=210;
        }else{
            ans+=100;
        }
    }
    cout<<ans;
    //code end
    return 0;
}