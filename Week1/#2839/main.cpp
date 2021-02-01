#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int n,c,d,output;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    c=-1;


    d=n/5;
    for(int i=d;i>=0;i--)
    {
        if( (n-i*5) %3 ==0)
        {
            c=i + ((n-i*5)/3);
            break;
        }
    }

    cout<<c;
    return 0;
}
