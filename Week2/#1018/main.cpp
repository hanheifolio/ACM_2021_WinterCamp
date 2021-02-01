#include <iostream>
#include <algorithm>
#include <vector>
#define INFINITE 10000

int n,m;
char temp;
using namespace std;

int count;
vector<vector<char>> v;

int main() {

    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        vector<char> vl;
        for(int j=0;j<m;j++)
        {
            cin>>temp;
            vl.push_back(temp);
        }
        v.push_back(vl);
    }

    int count1=INFINITE;
    int count2=INFINITE;
    //count1 : (0,0) == 'W'

    int temp_count1;
    int temp_count2;
    for(int i=0;i<n-7;i++)
    {
        for(int j=0;j<m-7;j++)
        {

            temp_count1=0;
            for(int h=i;h<i+8;h++)
            {
                for(int k=j;k<j+8;k++)
                {
                    if( ( (h+k)%2 ==1 ) && (v[h][k] == 'W' ) )
                    {
                        temp_count1++;
                    }
                    else if(( (h+k)%2 ==0 ) && (v[h][k] == 'B' ) )
                    {
                        temp_count1++;
                    }
                }
            }

            if(temp_count1 < count1)
            {
                count1 = temp_count1;
            }

        }

    }
    //count2 : (0,0) == 'B'
    for(int i=0;i<n-7;i++)
    {
        for(int j=0;j<m-7;j++)
        {
            temp_count2=0;
            for(int h=i;h<i+8;h++)
            {
                for(int k=j;k<j+8;k++)
                {
                    if( ( (h+k)%2 ==0 ) && (v[h][k] == 'W' ) )
                    {
                        temp_count2++;
                    }
                    else if(( (h+k)%2 ==1 ) && (v[h][k] == 'B' ) )
                    {
                        temp_count2++;
                    }
                }
            }

            if(temp_count2 < count2)
            {
                count2 = temp_count2;
            }

        }

    }


    cout<<min(count1,count2);

    return 0;
}
