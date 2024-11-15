#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=0,m=0,n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d %d",&a,&b);
    if(a>b)
        m++;
    else if(a<b)
        c++;

    }
    if(m>c)
        printf("Mishka");
    else if(m<c)
        printf("Chris");
    else
        printf("Friendship is magic!^^");
}
