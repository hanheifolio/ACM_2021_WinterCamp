#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int m,n,temp;
int bnsrch();
vector <int> v;
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());


    int left = 1;
    int right = v[n-1];
    int mid = (left+right)/2;
    int return_output = 0;

    while(left <= right)
    {
        int counter = 0;
        for(int i=0;i<n;i++)
        {
            counter +=v[i]/mid;
            if(counter>=m)
                break;
        }
        if(counter >= m)
        {
            return_output = mid;
            left = mid+1;
            mid = (right + left)/2;
        }
        else
        {
            right=mid-1;
            mid = (right+left)/2;
        }
    }


    cout<<return_output;

    return 0;
}

