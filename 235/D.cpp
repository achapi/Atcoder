/**
  date : 2022年01月15日22時06分22秒
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
int a,n;
int sp(int a){
    if(a<10||a%10==0)return 0;
    string s=to_string(a%10)+to_string(a/10);
    int v = stoi(s);
    return v;
}
void bai(int x2,int ans){
    int x=x2;
    if(x<n){
    if(x==n){
            cout<<ans;
            return;
    }
    ans++;
    x*=a;
    bai(x,ans);
    }
    x=sp(x2);
    if(x==0)return;
    if(x<n){
        if(x==n){
            cout<<ans;
            return;
        }
        ans++;
        x*=a;
        bai(x,ans);
    }
    return;
}
int main() {
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(false);
    //code start
    cin>>a>>n;
    int x=1;
    int ans=0;
    while(x<n){
        bai(x,ans);
    }
    if(ans!=0)cout<<ans;
    else cout<<-1;
    //code end
    return 0;
}