#include <iostream>
#include <vector>
#include <algorithm>
#define INFINITE 100000000
int n,m,b;
int temp;
using namespace std;
vector<vector<int>> v;


int counter_for_output;
int output_for_b;
int minnum,maxnum;
int output_for_height;
int main() {
    cin>>n>>m>>b;
    int i,j;
    for(i=0;i<n;i++)
    {
        vector <int> vl;
        for(j=0;j<m;j++)
        {
            cin>>temp;
            vl.push_back(temp);
        }
        v.push_back(vl);
    }
    maxnum = v[0][0];
    minnum= v[0][0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(minnum  > v[i][j])
                minnum= v[i][j];
            if(maxnum < v[i][j])
                maxnum= v[i][j];
        }
    }


    counter_for_output=INFINITE; // 쌓기
    output_for_b=0;
    int counter_up;
    int counter_down;
    int temp_b;
    int counter;
    for(int k=minnum;k<=maxnum;k++)
    {
        counter_up = 0;
        counter_down = 0;
        temp_b = b;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if ( (v[i][j] -k)> 0 )
                {
                    counter_down += (v[i][j]-k);
                    temp_b += v[i][j]-k;
                }
                else if (v[i][j]-k < 0)
                {
                    (counter_up += k- v[i][j]);
                    temp_b -= (k-v[i][j]);
                }
            }
        }

        if(temp_b <0)
        {
            continue;
        }
        else
        {
            counter = counter_down*2 + counter_up*1;

            if(counter <= counter_for_output)
            {
                counter_for_output = counter;
                output_for_b = temp_b;
                output_for_height = k;
            }


        }

    }

    cout <<counter_for_output<<" "<<output_for_height;
    return 0;
}
