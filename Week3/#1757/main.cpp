#include <iostream>
#include <algorithm>
#include <vector>

int n,m;
using namespace std;
vector<int> v;
int temp;

int dp[10001][505][2];
int main() {
    cin>>n>>m;
    v.push_back(-1);
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }

    dp[0][0][0]  = 0;
    dp[0][0][1] = 0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(j==0)
            {
                dp[i][j][0] = max({dp[i-1][j][0],dp[i-1][j+1][1],
                                  dp[i-1][j+1][0]});
            }
            else if(j ==1)
            {
                dp[i][j][1] = max(dp[i][j-1][1],dp[i-1][j-1][0]) +v[i];
                dp[i][j][0] = max(dp[i-1][j+1][1],dp[i-1][j+1][0]);
            }
            else
            {
                dp[i][j][1] = dp[i-1][j-1][1]+v[i];
                dp[i][j][0] = max(dp[i-1][j+1][1],dp[i-1][j+1][0]);
            }

        }
    }

    cout<<dp[n][0][0];

    return 0;
}
