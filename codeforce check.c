#include<stdio.h>
int main()
{
    int n,i,j=0;
    char a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=0;
        scanf(" %c",&a);
        if(a=='c' ||a=='o' ||a=='d' ||a=='e' ||a=='f' ||a=='o' ||a=='r' || a=='c' || a=='e'|| a=='s' )
            j=1;
    if(j==1)
        printf("YES\n");
    else
        printf("NO\n");
    }
}
