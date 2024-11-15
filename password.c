#include<stdio.h>
int main()
{
    int a,b[50],j,c,n,f,s1,s2=0,s3=0;
    scanf("%d %d",&a,&c);
        s1=0;
        for( j=0;j<a;j++)
        {
            scanf("%d",&b[j]);
        }
        f=b[c-1];

        for(j=0;j<a;j++)
        {
            if(f==0)
            {
                if(f<b[j])
                    s3++;
            }
            if(f<b[j] && f!=0)
                s1++;
            if(f==b[j] && f!=0)
                s2++;
        }
            printf("%d",s1+s2+s3);


}
