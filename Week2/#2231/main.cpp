#include <iostream>
#include <algorithm>
#include <time.h>
int n;

using namespace std;

int main() {
    cin>>n;

    int i,j;
    int comparer;
    for(i=1;i<=n;i++)
    {
        comparer=0;
        j=i;
        while(j!=0)
        {
            comparer+=j%10;
            j/=10;
        }
        if(comparer+i == n)
        {
            cout<<i;
            break;
        }
    }

    if(i==n+1)
    {
        cout<<0;
    }

    return 0;
}
