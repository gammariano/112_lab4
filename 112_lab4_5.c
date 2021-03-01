#include<stdio.h>
#include<string.h>
void Acronym(char*s);
int main()
{
    char sentence[200];
    printf("Enter sentence: ");
    gets(sentence);
    Acronym(sentence);
}
void Acronym (char *s)
{
    int i=1;
    char delim[]=" ";
    char *j;
    j=strtok(s,delim);
    printf("%c",toupper(s[0]));
}
