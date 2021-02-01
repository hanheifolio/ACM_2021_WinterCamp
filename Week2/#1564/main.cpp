#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 10

int answer[MAX];
bool isused[MAX];
int n,m,temp;
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
        for(int i=0;i<m;i++)
            cout<<answer[i]<<" ";
        cout<<"\n";
        return;
    }
    int before =-1;

    for(int i=num;i<n;i++)
    {
        if(isused[i] == false && before!=v[i])
        {
            isused[i]= true;
            before = v[i];
            answer[level] = v[i];
            solve(level+1,i);
            isused[i] = false;
        }






    }



}