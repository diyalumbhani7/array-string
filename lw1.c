#include<stdio.h>
int main()
{
    char a[20];
    int upper=0,lower=0,symbol=0;

    printf("Create your password:");
    scanf("%s",&a);

    printf("Enter your password: %s",a);

    int i=0;
    while(a[i]!='\0')
    {
        if(a[i]>=65 && a[i]<=90)
        {
            upper=1;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            lower=1;
        }
        else
        {
            symbol=1;
        }
        i++;
    }

    if(upper && lower && symbol)
    {
        printf("\n Your password is strong");
    }
    else
    {
        printf("\n Your password is not strong");
    }
    return 0;
}