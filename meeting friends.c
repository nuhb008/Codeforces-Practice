#include<stdio.h>
#include<math.h>
int main()
{
    int a[10000],c,r,n,t,b,i,j;
    for(j=0;j<3;j++)
        {
            scanf("%d",&a[j]);
        }

    for (i=0; i<3; i++)
        {
      for (j=i+1; j<3; j++){
      if (a[i] > a[j]){
         t=a[i];
         a[i] = a[j];
         a[j] = t;
      }
   }
}
r=(a[1]-a[0])+(a[2]-a[1]);
printf("%d",r);
}

