#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
deque<int> dq;
int n,m;
int temp;
bool flag = false;

void o1()
{
    //1
    int temp1 = dq.front();
    dq.pop_front();

}

void o2()
{

    //2
    int temp2 = dq.front();
    dq.pop_front();
    dq.push_back(temp2);
}

void o3()
{
    //3
    int temp3 = dq.back();
    dq.pop_back();
    dq.push_front(temp3);
}


int main() {
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }

     for(int i=1;i<=n;i++)
     {
         v.push_back(i);
     }

     int mintrack = *min_element(v.begin(),v.end());


     int counter =0;
     while(v.size()!=0)
     {
         if( // )
         {
             while(dq.front()!=v[0])
             {
                 o1();
             }
             o1();
             v.erase(v.begin());
             continue;
         }




















     }







    return 0;
}
