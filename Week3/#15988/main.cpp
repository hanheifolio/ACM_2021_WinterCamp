#include <iostream>
#include <vector>
#define MAX 2000000
using namespace std;
int n,m;
vector <int> v;
using ll = long long;
ll counting_method[MAX];

ll count_func(int num);
int main() {

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        v.push_back(m);
    }


    counting_method[0] =0;
    counting_method[1] =1;
    counting_method[2] = 2;
    counting_method[3] = 4;

    for(int i=4;i<MAX;i++)
    {
        counting_method[i] = counting_method[i-1]+
                counting_method[i-2]+counting_method[i-3];
        counting_method[i]%=1000000009;
    }



    for(int i=0;i<n;i++)
    {
        cout<<counting_method[v[i]];
        if(i!=n-1)
        {
            cout<<"\n";
        }
    }

    return 0;
}

/*

ll count_func(int num)
{
    if(num<=3)
    {
        return counting_method[num];
    }

    if(counting_method[num]!=-1)
        return counting_method[num];

    counting_method[num] = count_func(num-1) + count_func(num-2) + count_func(num-3);
    return counting_method[num]%1000000009;

}
 */