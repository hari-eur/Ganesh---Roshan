#include<stdio.h>
#include<stdlib.h>
main()
{
    int *arr;
    int n,i,sum=0;
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Sum is %d",sum);
    free(arr);
}
