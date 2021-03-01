#include<stdio.h>
int main()
{
    int i;
    char a[500],key;
    scanf("%s" ,a);
    while(a[i]!='\0')
    {
        key=a[i];
        printf("%c" ,a[i]);
        while(a[i]==key)
        {
            i++;
        }
    }
    return 0;
}
