#include <iostream>
#define MAX 10

using namespace std;
int answer[MAX];
int n,m;

void solve(int level,int num);

int main() {

    cin>>n>>m;
    solve(0,1);
    return 0;
}

void solve(int level,int num)
{
    if(level == m)
    {
        for(int i=0;i<m;i++)
        {
            cout<<answer[i]<<" ";
        }
        cout <<"\n";

    }
    else
    {
        for(int i=num;i<=n;i++)
        {
            answer[level]=i;
            solve(level+1,i);


        }



    }



}