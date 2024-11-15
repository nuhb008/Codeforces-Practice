#include<iostream>

using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x1,y1,x2,y2;
        cin>>x1>>y1;
        cin>>x2>>y2;
        ll s1=x2-x1;
        ll s2=y2-y1;
        if(s1==s2 || (x1<y1 && x2<y2) || (x1>y1 && x2>y2))
        {
            cout<<"yes\n";
        }
        else
        {
            cout<<"no\n";

        }

    }
}