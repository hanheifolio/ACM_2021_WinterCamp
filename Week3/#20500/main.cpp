#include <iostream>
#include <vector>
#define MAX 1516
using namespace  std;
#define MOD 1000000007

// 조합으로도 다시 풀어보기 !!!!
using ll = long long;

ll dp[MAX][3];

int n;
int main() {

    cin >>n;

    dp[1][0] = 0;
    dp[1][1] =1 ;
    dp[1][2] = 1;

    for(int i=2;i<=1515;i++)
    {
        dp[i][0] = dp[i-1][1]%MOD+dp[i-1][2]%MOD;

        dp[i][1] = dp[i-1][0]%MOD+dp[i-1][2]%MOD;

        dp[i][2] = dp[i-1][0]%MOD+ dp[i-1][1]%MOD;

    }

    cout<<dp[n-1][1]%MOD;
    return 0;
}
