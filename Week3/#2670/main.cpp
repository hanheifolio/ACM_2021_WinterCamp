#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector <double> v;
#define MAX 10001
int n;
double temp;
double dp[MAX][MAX];
int main() {

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    for(int j=1;j<n;j++)
    {
        dp[1][j] = v[j];
    }
    int j=3;
    dp[2][j] = dp[1][]




    return 0;
}
