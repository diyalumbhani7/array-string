#include<stdio.h.>
int main()
{
    char a[20];
    printf("Enter any string:");
    scanf("%s",&a);

    for(int i=0; a[i]!='\0'; i++)
    {
        if(a[i]>=65 || a[i]<=90)
        {
            printf("The given string is palindrome");
        }
        else
        {
             printf("The given string is not palindrome");
        }
    }
    return 0;
}