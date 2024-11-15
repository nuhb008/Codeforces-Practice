#include<iostream>
#include <bits/stdc++.h>

int main()
{
    int i,n,j,k,x,y,c,l;
    char a[100005];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        x=0,c=0;
        scanf("%d",&k);
        scanf("%s",a);
        l=strlen(a);
        if(a[0]==a[l-1])
        {
            printf("%d\n",k);
            continue;
        }
        for(j=0,x=l-1;;j++,x--)
        {
            if(a[j]=='1' && a[x]=='0' )
                c++;
            else if(a[j]=='0' && a[x]=='1' )
                c++;
            else
                break;


        }
        if(2*c>l)
            printf("0\n");
        else
        printf("%d\n",(l-(2*c)));
    }

}
