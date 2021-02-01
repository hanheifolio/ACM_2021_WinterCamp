#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n,temp;
vector<int> a;
vector<int> b;

int main() {

    cin>>n;
    for(int i=0;i<2*n;i++)
    {
        cin>>temp;
        if(i<n)
        {
            a.push_back(temp);
        }
        else
            b.push_back(temp);

    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int sum=0;
    int tool=n-1;
    for(int i=0;i<n;i++)
    {
        sum+=a[i]*b[tool-i];
    }

    cout<<sum;

    return 0;
}
