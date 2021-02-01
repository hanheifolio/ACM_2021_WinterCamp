#include <iostream>
#include <vector>
#define MAX 22
int n,s,m;
int output;
int comparer;

int answer[MAX];
int isused[MAX];

int j;

using namespace std;
vector<int> v;

void solve(int level,int num);

int main() {

    cin>>n>>s;

    for(int i=0;i<n;i++)
    {
        cin>>m;
        v.push_back(m);
    }

    output =0;

    for(j=1;j<=n;j++)
    {
        solve(0,0);
   //     cout<<"nextLine\n";
    }


    cout<<output;
    return 0;
}

void solve(int level,int num)
{

    if(level == j)
    {
        comparer=0;
        for(int i=0;i<j;i++)
        {
            //cout<<answer[i]<<" ";
            comparer+=answer[i];
        }

        if(comparer == s)
        {
            output++;
        }

       // cout<<"\n";
        return;
    }

    else
    {

        for(int i=num;i<n;i++)
        {
            if(isused[i])
                continue;
            isused[i] = true;
            answer[level] = v[i];
            solve(level+1,i+1);
            isused[i]= false;
        }




    }


}
