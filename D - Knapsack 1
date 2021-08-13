Problem link: https://atcoder.jp/contests/dp/tasks/dp_d
_______________________________________________________
#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+112;
long long dp[101][mx];
int p[101], w[101];
int sz, n;

long solve(int i, int cw){
    if(i>n) return 0;
    if(dp[i][cw]!=-1) return dp[i][cw];
    long long ret1=0, ret2=0;
    if(w[i]+cw<=sz) ret1=p[i]+solve(i+1, w[i]+cw);
    ret2=solve(i+1, cw);
    return dp[i][cw]=max(ret1, ret2);
}
int main()
{
    cin>>n>>sz;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i]>>p[i];
    } 
    memset(dp, -1, sizeof(dp));
    cout<<solve(1, 0)<<endl;
}
