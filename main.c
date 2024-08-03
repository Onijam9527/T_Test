#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10]={0};
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        a[0][i]=1;
        a[i][n-i]=1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
