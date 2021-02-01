#include <iostream>
#include <algorithm>
#define MAX 1000002
#define INFINITE 100000000;
int n;
int c=0;
using namespace std;
using ll = long long;
ll comp1,comp2;
ll dp[MAX];
int main() {

    cin >>n;

    dp[0]=0;
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;

    ll temp1,temp2,temp3,temp4,temp5;
    for(int i=4;i<MAX;i++)
    {
        // case 분류 해줘야 함
        temp1=temp2=temp3=temp4=temp5=INFINITE;

        if(i%3 ==0)
        {
            temp1 = dp[i/3]+1;
        }
        if(i % 2 ==0)
        {
            temp2 = dp[i/2] +1;
        }

        if(i%3 == 1)
        {
            temp3 = dp[i-1]+1;
        }

        if (i%3 == 2)
        {
            temp4 = dp[i-2]+2;
        }

        if(i%2 == 1)
        {
            temp5 = dp[i-1]+1;
        }

        comp1=min(temp1,temp2);
        comp1 = min(temp5,comp1);
        comp2= min(temp3,temp4);
        dp[i] =min(comp1,comp2);
    }
    cout<<dp[n];


    return 0;
}
