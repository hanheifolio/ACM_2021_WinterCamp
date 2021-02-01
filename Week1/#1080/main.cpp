#include <iostream>
#include <algorithm>
#include <vector>

int n,m,input,output;

using namespace std;
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        v.push_back(input);
    }

    sort(v.begin(),v.end());
    output=0;
    for(int i=0;i<n;i++)
    {
        output += v[i]*(n-i);
    }

    cout<<output;
    return 0;
}
