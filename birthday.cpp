#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,n2,m=0,k,s=10000000007,c=1,d;
    int a[200005];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];

    }
    sort(a,a+n+1);

    for(i=1;i<=n;i++)
    {
        if(n%2!=0)
        {
            if(i%2!=0)
            printf("%d ",a[i]);
        }
       if(n%2==0)
        {
            if(i%2==0)
            printf("%d ",a[i]);
        }

    }
    for(i=n;i>0;i--)
    {
        if(n%2!=0)
        {
            if(i%2==0)
            printf("%d ",a[i]);
        }
       if(n%2==0)
        {
            if(i%2!=0)
            printf("%d ",a[i]);
        }

    }

}
