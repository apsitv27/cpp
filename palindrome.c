#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[20];
    int start=0;
    printf("Enter a string:-");
    scanf("%s",str);
    int end=strlen(str)-1;
    while(end>start)
    {
        if(str[start]!=str[end])
        {
            printf("Not a palindrome string\n");
            exit(0);
        }
    start++;
    end--;

    }
    printf("Palindrome String\n");
    return 0;

}