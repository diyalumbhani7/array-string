#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];
    int freq[256] ={0};
    printf("Enter any string:");
    scanf("%s",&a);

    for(int i=0; a[i]!='\0'; i++)
    {
        freq[a[i]]++;
    }

    for(int i=0; i<256; i++)
    {
        if(freq[i]>0)
        {
        printf(" \n%c => %d",i,freq[i]);
        }
    }

    return 0;
}