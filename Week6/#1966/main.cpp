#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <set>
using namespace std;
int tn;
int n,m;
double temp;
int compare(int a,int b)
{
    return a>b;
}

int main() {

    cin>>tn;

    for(int i=0;i<tn;i++)
    {
        cin>>n>>m;
        deque<double> q;

        int pick;
        int j;

        for(j=0;j<n;j++)
        {
            cin>>temp;
            if(j==m)
            {
                double tmp = temp+0.1;
                q.push_back(tmp);
            }
            else
                q.push_back(temp);
         }
         // vector<int> v;
        double temper;
        int counter=0;
        double maxelement = (int)*max_element(q.begin(),q.end());

        while(q.size()!=0)
        {

            temper = q.front();
            int temperint = (int)temper;

            if(temper <maxelement)
            {
                q.pop_front();
                q.push_back(temper);
            }
            else
            {
                if( ((temper-temperint)) >0 &&( (temper-temperint)<1) )
                {
                    counter++;
                    q.pop_front();
                    break;
                }
                else
                {
                    q.pop_front();
                    counter++;
                    maxelement=(int)*max_element(q.begin(),q.end());
                }

            }


        }
        cout<<counter<<"\n";

    }



    return 0;
}
