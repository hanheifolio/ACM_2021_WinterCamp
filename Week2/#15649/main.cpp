#include <iostream>

#define MAX 9
using namespace std;
int n,m;
int answer[MAX];
bool isused[MAX];


void solve(int level)
{
    if(level == m)
    {
        for(int i=0;i<m;i++)
        {
            cout<< answer[i]<<" ";
        }
        cout<<'\n';
        return;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(isused[i])
                continue;
            isused[i] = true;
            answer[level] = i;
            solve(level+1);
            isused[i]= false;
        }

    }
}


int main() {

    cin>>n>>m;
    solve(0);



    return 0;
}
