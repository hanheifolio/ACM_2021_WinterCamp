#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int n,m,input,output;
int c;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    cin>>m;

    vector<int> v1;
    vector<int> v2;
    vector<int> nv;
    for(int i = 0;i<n;i++)
    {
        cin>>input;
        if(input%10==0)
        {
            v1.push_back(input);
        }
        else
        {
            v2.push_back(input);
        }

      }

    sort(v1.begin(),v1.end());
    c=0;

    for(int i=0;i<v1.size();i++)
    {
      while(v1[i]>10 && c<m)
      {
          v1[i]-=10;
          nv.push_back(10);
          c++;
      }
    }

    for(int i=0;i<v2.size();i++)
    {
        while(v2[i]>10 && c<m)
        {
            v2[i]-=10;
            nv.push_back(10);
            c++;
        }
    }

    output=nv.size();

    for(int i=0;i<v1.size();i++)
    {
        if(v1[i]==10)
        {
            output++;
        }
    }
    for(int i=0;i<v2.size();i++)
    {
        if(v2[i]==10)
        {
            output++;
        }
    }

    cout<<output;


    return 0;
}
