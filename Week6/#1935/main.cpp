#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int n;
string temp;

vector<int> v;
stack<double> s;

map<char,int> m;
int main() {


    cin>>n;
    cin>>temp;
    int inn;
    for(int i=0;i<n;i++)
    {
        cin>>inn;
        v.push_back(inn);
    }

    for(int i=0;i<n;i++)
    {
        m.insert(make_pair('A'+i,v[i]));
    }

    for(int i=0;i<temp.length();i++)
    {
        if(temp[i]!='+' && temp[i]!='-' &&
        temp[i]!='*'&& temp[i]!='/')
        {
          //  cout<<<<"\n";
          s.push(m.find(temp[i])->second);
        }

        else
        {

            switch(temp[i]) {

                case '+': {
                    double a = s.top();
                    s.pop();
                    double b = s.top();
                    s.pop();
                    s.push(a + b);
                    break;

                }

                case '-': {

                    double a = s.top();
                    s.pop();
                    double b = s.top();
                    s.pop();
                    s.push(b - a);
                    break;
                }

                case '*': {

                    double a = s.top();
                    s.pop();
                    double b = s.top();
                    s.pop();
                    s.push(a * b);
                    break;
                }
                    break;

                case '/': {

                    double a = s.top();
                    s.pop();
                    double b = s.top();
                    s.pop();
                    s.push(b / a);
                    break;
                }

            }


        }


    }

    printf("%.2lf",s.top());
    return 0;
}
