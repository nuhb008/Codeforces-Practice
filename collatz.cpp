#include<iostream>
#include<math.h>
using namespace std;
#define ll long long

void ex(int t)
{
    
        ll x,y,k;
        cin>>x>>y>>k;
        while(x!=1)
        {
            ll d=y-x%y;
            if(d<=k)
            {
            k-=d;
            x+=d;
            }
            else
            {
            cout<<x+k<<endl;
            return;
            }
            while(x%y==0)
            {
                x=x/y; 
            }

        }
        cout<<k%(y-1)+x<<endl;


}
int main()
{
    int t;
    cin>>t;
    while(t--) ex(t);
}