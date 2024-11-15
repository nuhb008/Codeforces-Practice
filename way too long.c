#include<stdio.h>
int main()
{
    char s[100];

    int a,i,c=0,n,d;
    scanf("%d",&n);
    for(a=0;a<n;a++){
      scanf("%s",s);
            c=0;
            d=strlen(s);
    if(d>10)
    {
    for(i=1;i<d-1;i++)
    {
       c++;
    }

    s[1]=c;
    printf("%c%d%c \n",s[0],c,s[d-1]);


    }
    else
        printf("%s\n",s);
    }

}
