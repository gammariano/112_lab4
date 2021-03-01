#include<stdio.h>
int main()
{
    int i,j,k,n=1,m;
    scanf("%d" ,&n);
    char glass[n][50];
    for(i=0;i<n;i++)
    {
        scanf("%[^\n]s" ,glass[i]);
    }
    for(j=0;j<n;j++)
    {
        m=1;
        for(i=0;glass[j][i]!='\0';i++)
        {
            if(glass[j][i]>='A'&&glass[j][i]<='E')
            {
                if(glass[j][i]=='A')
                {
                    if(m==1)
                    {
                        m=1;
                    }
                    else if(m==2)
                    {
                        m=3;
                    }
                    else if(m==3)
                    {
                        m=2;
                    }
                    else
                    {
                        m=4;
                    }
                }
                else if(glass[j][i]=='B')
                {
                    if(m==1)
                    {
                        m=4;
                    }
                    else if(m==2)
                    {
                        m=2;
                    }
                    else if(m==3)
                    {
                        m=3;
                    }
                    else
                    {
                        m=1;
                    }
                }
                else if(glass[j][i]=='C')
                {
                    if(m==1)
                    {
                        m=3;
                    }
                    else if(m==2)
                    {
                        m=4;
                    }
                    else if(m==3)
                    {
                        m=1;
                    }
                    else
                    {
                        m=2;
                    }
                }
                else if(glass[j][i]=='D')
                {
                    if(m==1)
                    {
                        m=2;
                    }
                    else if(m==2)
                    {
                        m=1;
                    }
                    else if(m==3)
                    {
                        m=4;
                    }
                    else
                    {
                        m=3;
                    }
                }
                else if(glass[j][i]=='E')
                {
                    if(m==1)
                    {
                        m=4;
                    }
                    else if(m==2)
                    {
                        m=3;
                    }
                    else if(m==3)
                    {
                        m=2;
                    }
                    else
                    {
                        m=1;
                    }
                }
                else
                {
                    break;
                }
            }
        }
    }
}
