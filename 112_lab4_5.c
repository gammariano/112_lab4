#include<stdio.h>
int main()
{
    int i,j,k,m=1,n=1;
    scanf("%d" ,&n);
    char glass[n][50];
    for(i=0;i<n;i++)
    {
        scanf("%[^\n]s" ,glass[i]);
    }
    for(j=0;j<n;j++)
    {
        for(i=0;glass[j][i]!='\0';i++)
        {
            if(glass[j][i]>='A'&&glass[j][i]<='E')
            {

            }
        }
    }
}
