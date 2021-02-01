#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 10

using namespace std;
int n,m,temp;
vector<int> v;

int answer[MAX];

void solve(int level);

int main() {

    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    solve(0);
    return 0;
}

void solve(int level)
{
    if(level==m)
    {
        for(int i=0;i<m;i++)
            cout<<answer[i]<<" ";
        cout<<"\n";
        return ;
    }
    else
    {

        for(int i=0;i<n;i++)
        {

            answer[level]=v[i];
            solve(level+1);


        }





    }

}
