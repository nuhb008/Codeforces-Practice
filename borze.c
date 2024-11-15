#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
     char a[10000],s,c;
     gets(a);
     int i,j;
     for(i=0;a[i]!='\0';i++)
     {
         if(a[i]=='.')
            printf("0");
         else if(a[i]=='-' && a[i+1]=='.')
         {
            i++;
            printf("1");
         }
         else if(a[i]=='-' && a[i+1]=='-')
         {
             printf("2");
             i++;
         }
     }


}
