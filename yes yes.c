#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,d,c,k;
    char a[10000],b[10000]="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    scanf("%d",&n);
    while(n--)
    {
        c=0,k=0;
        scanf("%s",&a);
        d=strlen(a);
        for(j=0;b[j]!='\0';j++)
        {
        if(a[0]==b[j])
        {
         k=j;
         break;
        }
        }
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]==b[k++])
                  c++;
            else
                break;

        }
        //printf("%d\n",c);
        if(d==c)
            printf("yes\n");
        else
            printf("no\n");
    }

}


