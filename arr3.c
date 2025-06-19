#include<stdio.h>
int main()
{
    int size;
    int a[20],b[20],c[20];  
    
     
    printf("Enter the size of array:");
    scanf("%d",&size);
    for(int i=0; i<size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the size of array:");
    scanf("%d",&size);
    for(int i=0; i<size; i++)
    {
        printf("b[%d] = ",i);
        scanf("%d",&b[i]);
    }
    for(int i=0; i<size; i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("Array c is ");
    for(int i=0; i<size; i++)
    {
    printf(" %d",c[i]);
    }
    return 0;
}