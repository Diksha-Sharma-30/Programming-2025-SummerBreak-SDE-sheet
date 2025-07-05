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
        int n;
        ll px,py,qx,qy;
        cin>>n>>px>>py>>qx>>qy;

        vector <ll> a(n);
        ll S=0,M=0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            S+=a[i];
            M= max(M, a[i]);
        }

        ll L=max(0LL,2LL*M-S);

        ll dx=qx-px, dy=qy-py;
        ll D2= dx*dx+ dy*dy;

        
        if (D2>=L*L && D2<=S*S) {
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
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