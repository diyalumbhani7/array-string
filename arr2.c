#include<stdio.h>
int main()
{
    int sum=0,size;
    float avg;
    int a[20];  
    
     
    printf("Enter the size of array:");
    scanf("%d",&size);
    for(int i=0; i<size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
   // size=sizeof a / sizeof a[0];
     for(int i=0; i<size; i++)
     {
        sum+=a[i];
     }
     avg=sum/size;
    printf("Average of an array: %f",avg);


    return 0;
}