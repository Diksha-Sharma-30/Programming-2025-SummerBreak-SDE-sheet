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
ll allsum(ll n){
    return (n*(n+1))/2;
}
void solve()
    {
        ll n,x,y;
        cin>>n>>x>>y;

        ll nx=n/x;
        ll ny=n/y;
        ll g=gcd(x,y);
        ll z=x/g*y;
        ll cm=n/z;
        nx-=cm;
        ny-=cm;
        ll sum=0;
        ll a=1;
        ll b=n;
        ll sz=max(nx,ny);
        
        sum-=allsum(ny);
        
        ll left=allsum(n)-allsum(n-nx);

        sum+=left;

        cout<<sum<<endl;;
        // cout<<nx<<" "<<ny<<" "<<cm<<" "<<allsum(nx)<<" "<<allsum(ny)<<" "<<lcm(x,y)<<"\n";
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