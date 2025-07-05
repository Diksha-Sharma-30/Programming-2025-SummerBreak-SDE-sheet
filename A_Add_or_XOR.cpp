#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<list>
#define ll long long
#define  mod 10e9+7
#define mapi map<int,int> 
#define mapll map<long long int,long long int >
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vlll vector<vll>
#define vs vector<string> 
#define pii pair<int,int>
#define pll pair<ll,ll>
#define fi first
#define se second
#define inf 1e18
#define all(v) v.begin(),v.end()
#define R(n) for(int i=0;i<n;i++)
#define R1(n) for(int i=1;i<=n;i++)
#define  gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
using namespace std;
void solve()
    {
        long long a,b,x,y;
        cin >>a>>b>>x>>y;

        if(a==b){
            cout<<0<<endl;
            return;
        }
        if(b>a){
            ll lo=a, hi=b-1;
            ll tot=hi-lo+1;
            ll ce=hi/2-(lo-1)/2;
            ll co=tot-ce;
            ll res= ce*min(x,y)+co*x;
            cout<<res<<endl;
        }else{
            if(a-b==1&&(a&1))cout<<y<<endl;
            else cout<<-1<<endl;
        }
    }
    
int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t;
        cin>>t;
        while(t--)
        solve();
    }