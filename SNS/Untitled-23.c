#include <stdio.h>
void main()
{
    int i,j,rows,k,m;
    printf("enter number to rows");
    scanf("%d",&rows);
    printf("\n");
    for(i=1;i<=rows;i++)
    {
        printf("");
        for(j=1;j<=rows-i;j++)
        {
            printf("");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        for(m=i-1;m>=1;m--)
        {
            printf("%d",m);
        }
        printf("\n");
    }
    printf("\n");
}