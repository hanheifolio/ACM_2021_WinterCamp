#include <iostream>
#include <algorithm>
#include <vector>

int n,m,input,temp,c,d;
int output;
using namespace std;

void calculate(vector<int> vec,int index, int* score);

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    vector<int> v;

    for(int i=0;i<n;i++)
    {
        cin>>input;
        if(m/input>0)
        {
            temp=i;
        }

        v.push_back(input);

    }

    output=0;

    calculate(v,temp,&m);
    cout<<output;
    return 0;
}

void calculate(vector<int> vec,int index, int* score)
{
    int* k;
    for(int i =m/vec[index];i>=0;i--)
    {
        *k=*score;
        *k-=vec[i]*i;
        if(*k>0)
        {
            calculate(vec,index-1,k);
        }

        if (*k==0)
        {
            output += vec[i];
            cout<<"processing:"<<vec[i]<<endl;
            return;
        }
        else
        {
            continue;
        }

    }

}