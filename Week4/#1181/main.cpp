
#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <set>
using namespace std;
int n;
set <string> s;
string temp;

bool compare(string a, string b);
int main() {
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(!temp.empty())
            s.insert(temp);
    }
    vector<string> nv;
    nv.assign(s.begin(),s.end());


    sort(nv.begin(),nv.end(),compare);

    for(int i=0;i<nv.size();i++)
    {
        cout<<nv[i]<<"\n";
    }
    return 0;
}

bool compare(string a, string b)
{
    if(a.length() == b.length())
    {
        return a<b;
    }
    else
    {
        bool output;
        (min(a.length(),b.length()) == a.length()) ? output= a>b : output= a<b;
        return output;
    }
}