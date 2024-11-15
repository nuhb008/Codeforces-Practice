#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
#define N 110
using namespace std;
int i,j,k,n,n2,d,t,m;
int a[N][N];

int cmp(int a[N], int b[N]) {
    return a[0] - b[0];
}

int main()
{
     cin>>n;
     for(k=0;k<n;k++)
     {
         t=0;
         cin>>n2;
         for (i=0; i<n2; i++)
         {
            for (j=0; j<n2-1; j++)
            {
                cin>>a[i][j];
            }
         }
        qsort(a,n,sizeof(int)*N,cmp);
        if (a[0][0] != a[1][0]) {
            cout<<a[1][0]<<" ";
            for (i=0; i<n-1; i++)
                cout<<a[0][i]<<" ";
        } else {
            cout<<a[0][0]<<" ";
            for (i=0; i<n-1; i++)
               cout<<a[n-1][i]<<" ";
        }
        cout<<"\n";
     }
}
