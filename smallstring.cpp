#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,i,s=0,b=26,c=26;
        cin>>a;
        if(a>c+b)
        {
            s=a-c+-b;
            //cout<<s;
            cout<<(char)(s+96)<<(char)(b+96)<<(char)(c+96)<<endl;

        }
        else{
            b--;
            while(a<=c+b)
            {
                if(b>1)
                b--;
                else
                c--;
            }
            s=a-b-c;
            cout<<(char)(s+96)<<(char)(b+96)<<(char)(c+96)<<endl;


        }

    }
}