#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,n2,m=0,k,s=10000000007,c=1,d;
    int a[200005];
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>m;
        a[i]=m;

    }
    sort(a,a+n);

    for(i=0;i+k-1<n;i++)
    {
       s = min(s, a[i + k - 1] - a[i]);
    }

    printf("%d",s);
}
