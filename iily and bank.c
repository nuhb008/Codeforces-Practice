#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
     char b[10000],s,c;
     int a;
     scanf("%d",&a);
     if(a>=0)
        printf("%d",a);
     else
     {
         s=a/10;
         a=-a;
         itoa(a,b,10);
         int l=strlen(b);
         b[l-2]=b[l-1];
         b[l-1]='\0';
         c=-atoi(b);
         printf("%d",c);
         if(s>c)
            printf("%d",s);
         else
            printf("%d",c);

     }


}
