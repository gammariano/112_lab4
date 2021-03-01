#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],t[15][5]={"i","of","the","on","at","for","with","a","an","in","and"};
    char *p;
    int i=1,j,k=0;
    scanf("%[^\n]s" ,s);
    p=strtok(s," ");
    while(p!=NULL)
    {
        for(j=0;j<15;j++)
        {
            if(strcmp(p,t[j]))
            {
                k++;
            }
        }
    }
}
