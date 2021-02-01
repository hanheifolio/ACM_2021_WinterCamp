#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int n,input,output,cur_score;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> v;
    cin>>n;
    for(int i=0;i<2*n;i++)
    {
        cin>>input;
        v.push_back(input);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        cur_score = v[i]+v[(2*n-1)-i];
        if(i==0 || output>cur_score)
        {
            output = cur_score;
        }
    }
    cout<<output;


    return 0;
}
