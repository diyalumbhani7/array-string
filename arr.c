#include<stdio.h>
int main()
{
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);

    int a[size];
    for(int i=0; i<size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[size]);
    }
printf("Length of array: %d",size);
    return 0;
}