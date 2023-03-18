#include<stdio.h>
main() 
{
    int i,j,n,a;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);
    int mat[n][n];
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<n;i++) 
    {
        for(j=0;j<n;j++) 
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Enter the element to be replaced: ");
    scanf("%d",&a);
    for(i =1;i<n;i++) 
    {
        for(j=0;j<n;j++) 
        {
            if(mat[i][j]==a) 
            {
                mat[i][j]=mat[i-1][j];
            }
        }
    }
    printf("Replaced matrix:\n");
    for(i=0; i<n;i++) 
    {
        for(j=0; j<n;j++) 
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
