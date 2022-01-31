/**
  date : 2022年01月18日18時50分35秒
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
int ans=0;
void water(vector<int> h){
    int hmin = *min_element(all(h));
    if(hmin!=0){
        ans+= hmin;
        rep(i, h.size())h[i]-=hmin;
    }
    if(*max_element(all(h))==0)return;
    h.push_back(0);
    int i=0;
    while(true){
        vector<int> s;
        while(true){
            if(h[i]==0&&s.size()==0){
                i++;
                break;
            }else if(h[i]==0&&s.size()!=0){
                water(s);
                i++;
                break;
            }
            else s.push_back(h[i]);
            i++;
        }
        if(i>h.size())break;
    }
}
int main() {
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(false);
    //code start
    int n;cin>>n;
    vector<int> h(n);
    rep(i, n)cin>>h[i];
    water(h);
    cout<<ans;
    //code end
    return 0;
}