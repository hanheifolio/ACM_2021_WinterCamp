#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int n,m;
vector<int> v;
vector<int> o;
int main() {

    cin>>n>>m;
    int temp;
    for(int i=1;i<=n;i++)
    {
        v.push_back(i);
    }

    int mover=0;

    while(v.size()>0)
    {
        mover += (m-1);
        mover %= v.size();
        o.push_back(v[mover]);
        v.erase(v.begin()+mover);

    }

    for(int i=0;i<o.size();i++)
    {
        if(i==0 && o.size()!=1)
        {
            cout<<"<"<<o[i]<<", ";
        }

        else if(i==0 && o.size() ==1)
        {
            cout<<"<";
            cout<<o[i]<<">";
        }

        else if(i==o.size()-1)
        {
            cout<<o[i]<<">";
        }

        else
        {
            cout<<o[i]<<", ";
        }

    }


    return 0;
}
