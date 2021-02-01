#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int l,p,v,output,temp1,temp2;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    for(int i=0;;i++)
    {
        cin>>l>>p>>v;
        if(l==0 && p==0 && v==0) {
            break;
        }
        temp1= v/p;

        temp2 = (v%p)>=l? l : v%p;
        output = temp1 * l + temp2;


        cout<<"Case "<<i+1<<": "<<output<<endl;

    }


    return 0;
}
