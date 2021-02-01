#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int n,m;
int startt,endt,num;
vector<vector<int>> v;


void solve(int level);

int main() {

    cin >> n;

    
    for(int i=0;i<n;i++)
    {
        vector <int> vl;
        cin>>startt>>endt>>num;
        vl.push_back(startt);
        vl.push_back(endt);
        vl.push_back(num);
        v.push_back(vl);
    }


    return 0;
}

void solve(int level)
{





}
