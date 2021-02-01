#include <iostream>
using namespace std;
using ll = long long;
#define MAX 100
ll fibo[MAX];
int n;
int main() {

    cin >>n;
    if(n>100)
    {
        n=100;
    }
    fibo[0]=0;
    fibo[1]=1;
    fibo[2]=1;
    for(int i=3;i<MAX;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }

    cout<<fibo[n];
    return 0;
}
