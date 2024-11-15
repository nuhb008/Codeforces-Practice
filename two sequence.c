#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[100005],b[100005],c=0,n,s=0,j=0,t=0,i,l=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
sort(a, a+ n, greater<int>());
for(i=0;i<n-1;i++)
    {
        if(a[i+1]==a[i])
            l++;
        else
            l=0;
        if(1<l)
            break;
    }
if(1<l)
    cout<<"NO";
else
    {
    cout<<"YES\n";
for (i=0; i<n-1; i++){
   for (j=i+1; j<n; j++){
      if (a[i] == a[j])
      {
           b[c++]=a[i];
           break;
      }
   }
}
   cout<<c<<endl;
    if(c!=0)
    {
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            for(j=i+1;j<n;j++)
            {
                 a[j]=a[j+1];

            }
            n--;
        }
    }
    }
    for(int i=c-1;i>=0;i--)
    {
        cout<<b[i]<<" ";
    }
    cout<<"\n";
    cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i] <<" ";
    }
    }

}
