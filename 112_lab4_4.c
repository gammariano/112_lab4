#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],delim[]=" ",*j;
    int i=1;
    printf("Enter sentence: ");
    gets(s);
    j=strtok(s,delim);
    printf("%c",toupper(s[0]));
    while(j!=NULL)
    {
        if(i>1)
        {

        }

    }
}
