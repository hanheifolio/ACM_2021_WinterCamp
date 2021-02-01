#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 10
int n,m,temp;
int answer[MAX];

using namespace std;
vector<int> v;
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
        for(int i=0;i<level;i++)
            cout<<answer[i]<<" ";
        cout<<"\n";
        return;
    }
    else
    {
        for(int i=num;i<n;i++)
        {
            answer[level]=v[i];
            solve(level+1,i);

        }








    }








}