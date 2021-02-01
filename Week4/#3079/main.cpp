#include <iostream>
#include <algorithm>
#include <vector>
#define INFINITE 1000000000
using namespace std;

int n,m,temp;
vector <int> v;
using ll = long long;

int main() {

    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    ll low = 1;
    ll high = 1e18;
    ll mid;
    ll output=1;
    while(low<=high)
    {
        mid = (low+high)/2;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=mid/v[i];
            if(sum >= m)
                break;
        }

        if(sum>=m)
        {
            output = mid;
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }


    }
    cout<<output;

    return 0;
}
