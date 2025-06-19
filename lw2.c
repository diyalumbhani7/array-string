#include<stdio.h.>
#include<string.h>
int main()
{
    char email[200],pass[200],email2[200],pass2[200];
printf("Enter your email:");
scanf("%s",&email);
printf("Enter your password:");
scanf("%s",&pass);

if(strcmp(email,email2) == 0 && strcmp(pass,pass2) == 0)
{
    printf("Login sucessful");
}
else
{
    printf("Login failed");

}

    return 0;
}