#include <iostream>
#include <algorithm>
#include <vector>

int n,m,temp;
using namespace std;
vector<int> v;

#define MAX 10

int answer[MAX];

void solve(int level,int num);

int main() {

    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    solve(0,0);

    return 0;
}
void solve(int level,int num)
{
    if(level == m)
    {
        for(int i=0;i<m;i++)
            cout<<answer[i]<<" ";
        cout<<"\n";
        return;
    }

    int before = -1;


    for(int i=num;i<n;i++)
    {
        if(i==0 || before!= v[i])
        {
            before = v[i];
            answer[level] = v[i];
            solve(level+1,i);
        }



    }


}