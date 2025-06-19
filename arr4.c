#include<stdio.h>
int main()
{
    int size,choice,index,element,new,old;
    printf("Enter array size:");
    scanf("%d",&size);

    int arr[100];
    for(int i=0; i<size; i++)
    {
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);

    }
    do
    {
        printf("\nEnter 1 for insert element:");
        printf("\nEnter 2 for update element:");
        printf("\nEnter 3 for delete element:");
        printf("\nEnter 4 for view all elements:");
        printf("\nEnter 0 for exit:");
        printf("\nEnter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Enter index:");
            scanf("%d",&index);
            printf("Enter element:");
            scanf("%d",&element);

            for(int i=size-1; i>=index; i--)
            {
                arr[i+1]=arr[i];
            }
            arr[index]=element;
            size++;
            break;
            case 2:
            printf("Enter index:");
            scanf("%d",&index);
            printf("Enter element:");
            scanf("%d",&old);
            printf("Enter element:");
            scanf("%d",&new);

            for(int i=0; i<size; i++)
            {
                if(arr[i]==old)
                {
                    arr[i]=new;
                }
            }
            
            break;
            case 3:
            printf("Enter index:");
            scanf("%d",&index);

            for(int i=index; i<size-1; i++)
            {
                arr[i]=arr[i+1];
            }
            size--;
            break;
            case 4:

            printf("Elements are:");
            for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    
    } 
            break;

            case 0:
        break;
        default:
        printf("wrong choice.");
        }
       


        
    } while (choice!=0);
    
    return 0;
}