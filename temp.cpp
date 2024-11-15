// C++ program to display all permutations
// of an array using STL in C++

#include <bits/stdc++.h>
using namespace std;

// Function to display the array
int display(int a[], int n)
{
for (int i = 2; i < n; i++) {
	//cout << a[i] << " ";
	if(a[i-1]+a[i]!=a[i-1]+a[i-2])
	{
        return 0;
	}
}
return 1;
//cout << endl;
}

// Function to find the permutations
int findPermutations(int a[], int n)
{

// Sort the given array
//sort(a, a + n);

// Find all possible permutations
//cout << "Possible permutations are:\n";
do {

	if(display(a, n)==1)
        return 1;
}
while (next_permutation(a, a + n));
return 0;
}

// Driver code
int main()
{
    int n;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        int m,arr[10005],f=0;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            cin>>arr[i];
            if(arr[i-1]!=arr[i])
                f=1;
        }
        if(f==0 || m==2 || findPermutations(arr, m)==1)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
//int n = sizeof(a) / sizeof(a[0]);

    }

}
