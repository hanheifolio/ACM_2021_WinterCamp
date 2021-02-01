#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <cstring>
#define MAX 10
#define TERM 256


int n,m;
using namespace std;

vector<int> v;

int temp;
int answer[MAX];
bool isused[MAX];

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
    if(level == m)
    {
        for(int i=0;i<m;i++) {
            cout << answer[i] << " ";
        }
        cout<<"\n";
        return;
    }
    int before = -1;

    for(int i=0;i<n;i++)
    {
        if(isused[i])
            continue;
        if(i == 0 || before !=v[i])
        {
            before = v[i];
          //  cout<<level<<":"<<"before"<<":"<<before<<"\n";
            isused[i] = true;
            answer[level] = v[i];
            solve(level + 1);
            isused[i] = false;

        }

    }


}