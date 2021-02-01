#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,input,c;
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> v;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>input;
        v.push_back(input);
    }
    c=0;

    for(int i=n-1;i>0;i--)
    {
        if(v[i]<=v[i-1])
        {
            c+=( v[i-1]-v[i]+1);
            v[i-1]=v[i]-1;
        }
    }



    cout<<c<<endl;
    return 0;
}
