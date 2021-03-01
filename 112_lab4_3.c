#include<stdio.h>
#include<string.h>
int main()
{
    int i,key=0;
    char a[200];
    scanf("%s" ,a);
    i=strlen(a);
    while(key<i)
    {
        if(a[key-1]!=a[key])
        {
            printf("%c" ,a[key]);
        }
        key++;
    }
    return 0;
}
