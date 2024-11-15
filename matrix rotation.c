#include<stdio.h>
int main()
{
    int a[100][100],i,j,n,k;
    scanf("%d",&n);
    for(k=1;k<=n;k++){
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int f=0;
    for(i=1;i<=3;i++)
    {
        if((a[1][1]<a[1][2] && a[2][1] <a[2][2] && a[1][1]<a[2][1] && a[1][2]<a[2][2]) || (a[1][1]>a[1][2] && a[2][1] >a[2][2] && a[1][1]<a[2][1] && a[1][2]<a[2][2]))
           {
               f=1;
               break;
           }
        int t;
        t=a[1][1];
        a[1][1]=a[2][1];
        a[2][1]=a[2][2];
        a[2][2]=a[1][2];
        a[1][2]=t;
    }

    if(f==1)
        printf("YES\n");
    else
        printf("NO\n");
    }


}
