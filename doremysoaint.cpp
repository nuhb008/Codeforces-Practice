#include<iostream>

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int m,arr[10005],b[10005],f=0;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            cin>>arr[i];

        }
        sort(arr,arr+n);
        int c=1;
        b[1]=1;
        for(int i=0;i<m-1;i++)
        {
            if(arr[i]==arr[i+1])
                b[c]++;
            else
                b[c++]=1;

        }
        if(c>2 || (c==2 && abs(b[1]-b[2])>1)  )
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;

    }



}
