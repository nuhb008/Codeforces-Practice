#include<stdio.h>
#include<math.h>
int main()
{
    int a,c,r,n,t=1,b,m,i,j;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    i=a+b*c;
    j=a*(b+c);
    n=a*b*c;
    r=(a+b)*c;
    //printf("%d",j);
    if(i==j && i==r)
        printf("%d",i+1);
    else if(i>=j && i>=n && i>=r)
        printf("%d",i);
    else if(i<=j && j>=n && j>=r)
        printf("%d",j);
    else if(n>=j && i<=n && n>=r)
        printf("%d",n);
    else if(r>=j && r>=n && i<= r)
        printf("%d",r);
}
