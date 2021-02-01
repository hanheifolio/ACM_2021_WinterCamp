#include <iostream>
using ll = long long;
using namespace std;

#define MAX 100

ll fibo[100];
int n;
ll fibonachi(int num);
int main() {

    cin>>n;
    for(int i=0;i<100;i++)
        fibo[i]=-1;
    fibonachi(n);
    cout<<fibo[n];

    return 0;
}

ll fibonachi(int num)
{
    if(num <2)
    {
        return fibo[num] = num;
    }
    if(fibo[num] != -1)
        return fibo[num];

    return fibo[num] = fibonachi(num-1)+fibonachi(num-2);

}