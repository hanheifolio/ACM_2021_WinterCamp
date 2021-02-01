#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define MAX 10001
vector <double> v;
int n;
double temp;

double dp[MAX];

int main() {
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    set<double> s;
    for(int i=1;i<=n;i++)
    {
        s.insert(i);
    }
    cout<<;


    return 0;
}
