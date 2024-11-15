#include<stdio.h>
int main()
{
    int n=0,i,j,c=0;
    char a[100];
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
            if(a[i]<93)
            {
              c++;
            }
            else
                n++;


    }
    for(i=0;i<strlen(a);i++){
            if(c>n)
            {
                if(a[i]>93)
                    a[i]-=32;
            }
            else
            {
                if(a[i]<93)
                a[i]+=32;
            }

    }
    printf("%s",a);

}
