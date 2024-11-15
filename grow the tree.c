#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,c=0,n,s=0,j=0,t;
    cin>>n;
    int b=n/2;
    int a[100005];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(i<b)
            s+=a[i];
        else
            c+=a[i];
    }
    cout<<1ll*s*s+1ll*c*c<<endl;
}
