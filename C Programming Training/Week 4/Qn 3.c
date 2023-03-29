#include<stdio.h>
main()
{
    int a[5] = {2,4,6,8,10};
    int *ptr;
    for(ptr=&a[0];ptr<=&a[4];ptr++)
    {
        printf("%d ",*ptr);
    }
}
