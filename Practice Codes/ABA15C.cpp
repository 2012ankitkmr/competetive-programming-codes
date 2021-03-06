#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long 
ll dp[505][505];
void compute()
{
memset(dp,0,sizeof dp);
    dp[0][0]=1;
 
    for(int j=0;j<=500;++j)
        dp[1][j]=1LL;
    //dp[i][j] means total number of ways to buy j cakes until i days
 
    for(int i=2;i<=500;++i)
    {
        dp[i][1]=dp[i][i]=1LL;
        for(int j=i+1;j<=500;++j)
        {
            dp[i][j]=dp[i][j-1]+dp[i-1][j-1];
            dp[i][j]%=MOD;
        }
    }

}
int main(void)
{
 compute();
    int test,n,l,h;
    scanf("%d",&test);
    ll ans;
	while(test--)
    {
        scanf("%d%d%d",&n,&l,&h);
        ans=0;
        for(int i=l;i<=h;++i)
            ans+=dp[i][n]%MOD;
        printf("%lld\n",ans%MOD);
    }
    return 0;
}
