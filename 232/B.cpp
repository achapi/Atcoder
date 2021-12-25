/**
  date : 2021年12月19日21時03分16秒
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
int st(char a){
    if(a=='a')return 0;
    if(a=='b')return 1;
    if(a=='c')return 2;
    if(a=='d')return 3;
    if(a=='e')return 4;
    if(a=='f')return 5;
    if(a=='g')return 6;
    if(a=='h')return 7;
    if(a=='i')return 8;
    if(a=='j')return 9;
    if(a=='k')return 10;
    if(a=='l')return 11;
    if(a=='m')return 12;
    if(a=='n')return 13;
    if(a=='o')return 14;
    if(a=='p')return 15;
    if(a=='q')return 16;
    if(a=='r')return 17;
    if(a=='s')return 18;
    if(a=='t')return 19;
    if(a=='u')return 20;
    if(a=='v')return 21;
    if(a=='w')return 22;
    if(a=='x')return 23;
    if(a=='y')return 24;
    if(a=='z')return 25;
}
int sa(char a,char b){
    if(a<b)return b-a;
    else return 26-a+b;
}
int main() {
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(false);
    //code start
    string s,t;cin>>s>>t;
    int aaa = sa(st(s[0]),st(t[0]));
    rep(i, s.size()){
        if(sa(s[i],t[i])!=aaa){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    //code end
    return 0;
}