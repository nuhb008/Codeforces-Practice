#include<stdio.h>
#include<stdlib.h>>
int main()
{
    int n,b,c=0,d,j;
    int a[10000];
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                break;
            }
        }
    }

    printf("%d",c);
}

