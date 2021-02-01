#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 20
using namespace std;
int n;

bool isused1[MAX];
bool isused2[MAX];
bool isused3[MAX];
int cnt=0;
//int forloopcnt=0;
void solve(int level)
{
   // cout<<"solve lv"<<level<<" is called \n";
    if(level == n)
    {
       // forloopcnt++;
        cnt++;
        return;
    }

    for(int i=0;i<n;i++)
    {
        if(isused1[i] || isused2[i+level] || isused3[level-i+n-1])
            continue;

        isused1[i] = true;
        isused2[i+level] = true;
        isused3[level-i+n-1] = true;
        solve(level+1);

        isused1[i] = false;
        isused2[i+level] = false;
        isused3[level-i+n-1]=false;

    }

    //forloopcnt++;

}


int main() {

    cin>>n;

    solve(0);
    cout<<cnt;

   // cout<<"\nfr:"<<forloopcnt;
    return 0;
}
