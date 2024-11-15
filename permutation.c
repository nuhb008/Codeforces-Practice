#include <stdio.h>
#include <stdlib.h>
#define N 110

int t, n, i, j;
int a[N][N];

int cmp(int a[N], int b[N]) {
    return a[0] - b[0];
}

int main() {
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for (i=0; i<n; i++)
            for (j=0; j<n-1; j++)
                scanf("%d", &a[i][j]);
        qsort(a,n,sizeof(int)*N,cmp);
        if (a[0][0] != a[1][0]) {
            printf("%d ", a[1][0]);
            for (i=0; i<n-1; i++)
                printf("%d ", a[0][i]);
        } else {
            printf("%d ", a[0][0]);
            for (i=0; i<n-1; i++)
                printf("%d ", a[n-1][i]);
        }
        printf("\n");
    }
}
