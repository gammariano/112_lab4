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
