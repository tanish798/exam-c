#include<stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j>=i)
            {
                printf("%d",5+i-j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
