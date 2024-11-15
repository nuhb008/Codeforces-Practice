#include<stdio.h>
int main()
{
    int i,j,r,c,n;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=5;c++)
        {
            scanf("%d",&n);
            if(n==1)
            {
                i=r;
                j=c;
            }
        }
    }
    if(i==3 && j==3)
        printf("0");
    //printf("%d\n",r);
    if(i==3 && j!=3)
    printf("%d",abs(3-j));
    if(j==3 && i!=3)
    printf("%d",abs(i-3));
    if(i<3 && j!=3)
    printf("%d",(3-i)+abs(3-j));    if(i>3 && j!=3)
    printf("%d",(i-3)+abs(3-j));
}
