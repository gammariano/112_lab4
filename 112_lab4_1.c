#include<stdio.h>
int main()
{
    int n;
    scanf("%d" ,&n);
    int a1[n][3],a2[n],b,c,i,count,max=0,min=2000;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d" ,&a1[i][0],&a1[i][1],&a1[i][2]);
    }
    for(i=0;i<n;i++)
    {
        a2[i]=(a1[i][0]*4)+(a1[i][1]*2)+a1[n][2];
    }
    for(i=0;i<n-2;i++)
    {
        count=a2[i]+a2[i+1]+a2[i+2];
        if(max<=count)
        {
            b=i+1;
            max=count;
        }
        if(min>=count)
        {
            c=i+1;
            min=count;
        }
    }
    printf("%d %d" ,b,c);
    return 0;
}
