Problem link: https://www.spoj.com/problems/KNAPSACK
____________________________________________________
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define FASTER_CODE ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mx=2003;
ll dp[mx][mx];
ll s, n,wi[mx],p[mx];

ll solve(int i, int cw)
{
    if(i>n) return 0;
    if(dp[i][cw]!=-1) return dp[i][cw];
    ll ret1=0, ret2=0;
    if(wi[i]+cw<=s) ret1= p[i]+ solve(i+1, wi[i]+cw );
    ret2= solve(i+1, cw);
    return dp[i][cw]=max(ret1, ret2);
}
int main()
{
    FASTER_CODE
    cin>>s>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>wi[i]>>p[i];
    }
    memset(dp,-1, sizeof(dp));
    cout<<solve(1,0)<<endl;
   
}
