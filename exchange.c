#include<stdio.h>
#include<math.h>
int main()
{
    float a,c,b;
    int p=0,n,i,j,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f %f %f",&a,&b,&c);
        if(c<b || a<b)
            printf("1\n");
        else
        {
            p=ceil(a/b);
            printf("%d\n",p);
        }


    }
}
