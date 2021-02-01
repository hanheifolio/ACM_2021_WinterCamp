#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> v1;
vector <int > v2;
int n,m,temp;

int bnsrch(int num);

int main() {

    cin >>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v1.push_back(temp);
    }

    cin >>m;
    for(int i=0;i<m;i++)
    {
        cin>>temp;
        v2.push_back(temp);
    }

    sort(v1.begin(),v1.end());

    for(int i=0;i<m;i++)
    {
        cout<<bnsrch(v2[i])<<"\n";
    }



    return 0;
}

int bnsrch(int num)
{
    int high = n-1;
    int low = 0;
    int mid;
    while(high>=low)
    {
        mid = (high+low)/2;
        if(v1[mid] == num)
            return 1;
        if (v1[mid]>num)
            high=mid-1;
        else
            low = mid+1;
    }
    return 0;
}